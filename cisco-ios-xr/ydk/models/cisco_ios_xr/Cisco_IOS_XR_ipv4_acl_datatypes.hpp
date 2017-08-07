#ifndef _CISCO_IOS_XR_IPV4_ACL_DATATYPES_
#define _CISCO_IOS_XR_IPV4_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_acl_datatypes {

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

};

class Ipv4AclTcpMatchOperatorEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;

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

};

class Ipv4AclTcpBitsNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf ack;
        static const ydk::Enum::YLeaf rst;
        static const ydk::Enum::YLeaf fin;
        static const ydk::Enum::YLeaf psh;
        static const ydk::Enum::YLeaf syn;
        static const ydk::Enum::YLeaf urg;

};

class Ipv4AclLoggingEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf log_input;

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

};

class Ipv4AclGrantEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

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

};

class Ipv4AclOperatorEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf greater_than;
        static const ydk::Enum::YLeaf less_than;
        static const ydk::Enum::YLeaf not_equal;
        static const ydk::Enum::YLeaf range;

};

class Ipv4AclStatusEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_ACL_DATATYPES_ */

