#ifndef _CISCO_IOS_XR_IPV6_ACL_DATATYPES_
#define _CISCO_IOS_XR_IPV6_ACL_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_acl_datatypes {

class Ipv6AclTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf acl;
        static const ydk::Enum::YLeaf prefix_list;

};

class Ipv6AclLoggingEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;
        static const ydk::Enum::YLeaf log_input;

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

};

class Ipv6AclTcpBitsNumber : public ydk::Enum
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

class Ipv6AclTcpMatchOperatorEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_all;
        static const ydk::Enum::YLeaf match_any;

};

class Ipv6PrefixMatchMaxLength : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_max_length;

};

class Ipv6AclGrantEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf deny;
        static const ydk::Enum::YLeaf permit;

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

};

class Ipv6AclOperatorEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf equal;
        static const ydk::Enum::YLeaf greater_than;
        static const ydk::Enum::YLeaf less_than;
        static const ydk::Enum::YLeaf not_equal;
        static const ydk::Enum::YLeaf range;

};

class Ipv6PrefixMatchMinLength : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_min_length;

};

class Ipv6AclStatusEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class Ipv6PrefixMatchExactLength : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf match_exact_length;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ACL_DATATYPES_ */

