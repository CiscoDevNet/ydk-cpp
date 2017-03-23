#ifndef _CISCO_IOS_XR_IPV4_ACL_DATATYPES_
#define _CISCO_IOS_XR_IPV4_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ipv4_acl_datatypes {

class Ipv4AclLoggingEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf log;
        static const Enum::YLeaf log_input;

};

class Ipv4AclDscpNumberEnum : public Enum
{
    public:
        static const Enum::YLeaf default_;
        static const Enum::YLeaf af11;
        static const Enum::YLeaf af12;
        static const Enum::YLeaf af13;
        static const Enum::YLeaf af21;
        static const Enum::YLeaf af22;
        static const Enum::YLeaf af23;
        static const Enum::YLeaf af31;
        static const Enum::YLeaf af32;
        static const Enum::YLeaf af33;
        static const Enum::YLeaf af41;
        static const Enum::YLeaf af42;
        static const Enum::YLeaf af43;
        static const Enum::YLeaf cs1;
        static const Enum::YLeaf cs2;
        static const Enum::YLeaf cs3;
        static const Enum::YLeaf cs4;
        static const Enum::YLeaf cs5;
        static const Enum::YLeaf cs6;
        static const Enum::YLeaf cs7;
        static const Enum::YLeaf ef;

};

class Ipv4AclOperatorEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf equal;
        static const Enum::YLeaf greater_than;
        static const Enum::YLeaf less_than;
        static const Enum::YLeaf not_equal;
        static const Enum::YLeaf range;

};

class Ipv4AclStatusEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};

class Ipv4AclPortNumberEnum : public Enum
{
    public:
        static const Enum::YLeaf echo;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf char_gen;
        static const Enum::YLeaf ftp_data;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf time;
        static const Enum::YLeaf name_server;
        static const Enum::YLeaf who_is;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf dns;
        static const Enum::YLeaf boot_ps;
        static const Enum::YLeaf boot_pc;
        static const Enum::YLeaf tftp;
        static const Enum::YLeaf gopher;
        static const Enum::YLeaf finger;
        static const Enum::YLeaf www;
        static const Enum::YLeaf host_name;
        static const Enum::YLeaf pop2;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf sun_rpc;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf nntp;
        static const Enum::YLeaf ntp;
        static const Enum::YLeaf net_bios_ns;
        static const Enum::YLeaf net_bios_dgs;
        static const Enum::YLeaf net_bios_ss;
        static const Enum::YLeaf snmp;
        static const Enum::YLeaf snmp_trap;
        static const Enum::YLeaf xdmcp;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf irc;
        static const Enum::YLeaf dnsix;
        static const Enum::YLeaf mobile_ip;
        static const Enum::YLeaf pim_auto_rp;
        static const Enum::YLeaf isakmp;
        static const Enum::YLeaf exec_or_biff;
        static const Enum::YLeaf login_or_who;
        static const Enum::YLeaf cmd_or_syslog;
        static const Enum::YLeaf lpd;
        static const Enum::YLeaf talk;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf klogin;
        static const Enum::YLeaf kshell;
        static const Enum::YLeaf ldp;

};

class Ipv4AclPrecedenceNumberEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf routine;

};

class Ipv4AclIcmpTypeCodeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf echo_reply;
        static const Enum::YLeaf network_unreachable;
        static const Enum::YLeaf host_unreachable;
        static const Enum::YLeaf protocol_unreachable;
        static const Enum::YLeaf port_unreachable;
        static const Enum::YLeaf packet_too_big;
        static const Enum::YLeaf source_route_failed;
        static const Enum::YLeaf network_unknown;
        static const Enum::YLeaf host_unknown;
        static const Enum::YLeaf host_isolated;
        static const Enum::YLeaf dod_net_prohibited;
        static const Enum::YLeaf dod_host_prohibited;
        static const Enum::YLeaf host_tos_unreachable;
        static const Enum::YLeaf net_tos_unreachable;
        static const Enum::YLeaf administratively_prohibited;
        static const Enum::YLeaf host_precedence_unreachable;
        static const Enum::YLeaf precedence_unreachable;
        static const Enum::YLeaf unreachable;
        static const Enum::YLeaf source_quench;
        static const Enum::YLeaf network_redirect;
        static const Enum::YLeaf host_redirect;
        static const Enum::YLeaf net_tos_redirect;
        static const Enum::YLeaf host_tos_redirect;
        static const Enum::YLeaf redirect;
        static const Enum::YLeaf alternate_address;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf router_advertisement;
        static const Enum::YLeaf router_solicitation;
        static const Enum::YLeaf ttl_exceeded;
        static const Enum::YLeaf reassembly_timeout;
        static const Enum::YLeaf time_exceeded;
        static const Enum::YLeaf general_parameter_problem;
        static const Enum::YLeaf option_missing;
        static const Enum::YLeaf no_room_for_option;
        static const Enum::YLeaf parameter_problem;
        static const Enum::YLeaf timestamp_request;
        static const Enum::YLeaf timestamp_reply;
        static const Enum::YLeaf information_request;
        static const Enum::YLeaf information_reply;
        static const Enum::YLeaf mask_request;
        static const Enum::YLeaf mask_reply;
        static const Enum::YLeaf traceroute;
        static const Enum::YLeaf conversion_error;
        static const Enum::YLeaf mobile_redirect;

};

class Ipv4AclIgmpNumberEnum : public Enum
{
    public:
        static const Enum::YLeaf host_query;
        static const Enum::YLeaf host_report;
        static const Enum::YLeaf dvmrp;
        static const Enum::YLeaf pim;
        static const Enum::YLeaf trace;
        static const Enum::YLeaf v2_report;
        static const Enum::YLeaf v2_leave;
        static const Enum::YLeaf mtrace_response;
        static const Enum::YLeaf mtrace;
        static const Enum::YLeaf v3_report;

};

class Ipv4AclGrantEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf deny;
        static const Enum::YLeaf permit;

};

class Ipv4AclTcpMatchOperatorEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf match_all;
        static const Enum::YLeaf match_any;

};

class Ipv4AclProtocolNumberEnum : public Enum
{
    public:
        static const Enum::YLeaf ip;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf ip_in_ip;
        static const Enum::YLeaf tcp;
        static const Enum::YLeaf igrp;
        static const Enum::YLeaf udp;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf esp;
        static const Enum::YLeaf ahp;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf nos;
        static const Enum::YLeaf pim;
        static const Enum::YLeaf pcp;
        static const Enum::YLeaf sctp;

};

class Ipv4AclTcpBitsNumberEnum : public Enum
{
    public:
        static const Enum::YLeaf established;
        static const Enum::YLeaf ack;
        static const Enum::YLeaf rst;
        static const Enum::YLeaf fin;
        static const Enum::YLeaf psh;
        static const Enum::YLeaf syn;
        static const Enum::YLeaf urg;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_DATATYPES_ */

