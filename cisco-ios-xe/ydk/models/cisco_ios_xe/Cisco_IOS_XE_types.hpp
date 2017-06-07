#ifndef _CISCO_IOS_XE_TYPES_
#define _CISCO_IOS_XE_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_types {

class Cos_ValueTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf cos;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf exp;
        static const Enum::YLeaf precedence;

};

class Exp_ValueTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf cos;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf exp;
        static const Enum::YLeaf precedence;

};

class InterfaceTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf BDI;
        static const Enum::YLeaf FastEthernet;
        static const Enum::YLeaf GigabitEthernet;
        static const Enum::YLeaf Loopback;
        static const Enum::YLeaf Port_channel;
        static const Enum::YLeaf Serial;
        static const Enum::YLeaf TenGigabitEthernet;
        static const Enum::YLeaf Vlan;

};

class PrecedenceTypeEnum : public Enum
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

class Qos_ValueTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf cos;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf exp;
        static const Enum::YLeaf precedence;

};

class Bgp_Ipv4_Af_TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf mdt;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf labeled_unicast;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf mvpn;

};

class DscpTypeEnum : public Enum
{
    public:
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
        static const Enum::YLeaf default_;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf ef;
        static const Enum::YLeaf precedence;

};

class AclTcpPortTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf chargen;
        static const Enum::YLeaf cmd;
        static const Enum::YLeaf connectedapps_plain;
        static const Enum::YLeaf connectedapps_tls;
        static const Enum::YLeaf daytime;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf domain;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf exec;
        static const Enum::YLeaf finger;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf ftp_data;
        static const Enum::YLeaf gopher;
        static const Enum::YLeaf hostname;
        static const Enum::YLeaf ident;
        static const Enum::YLeaf irc;
        static const Enum::YLeaf klogin;
        static const Enum::YLeaf kshell;
        static const Enum::YLeaf login;
        static const Enum::YLeaf lpd;
        static const Enum::YLeaf msrpc;
        static const Enum::YLeaf nntp;
        static const Enum::YLeaf pim_auto_rp;
        static const Enum::YLeaf pop2;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf sunrpc;
        static const Enum::YLeaf syslog;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf talk;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf time;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf whois;
        static const Enum::YLeaf www;

};

class MonthTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Jan;
        static const Enum::YLeaf Feb;
        static const Enum::YLeaf Mar;
        static const Enum::YLeaf Apr;
        static const Enum::YLeaf May;
        static const Enum::YLeaf Jun;
        static const Enum::YLeaf Jul;
        static const Enum::YLeaf Aug;
        static const Enum::YLeaf Sep;
        static const Enum::YLeaf Oct;
        static const Enum::YLeaf Nov;
        static const Enum::YLeaf Dec;

};

class Prec_ValueTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf cos;
        static const Enum::YLeaf dscp;
        static const Enum::YLeaf exp;
        static const Enum::YLeaf precedence;

};

class MobilityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf bind_acknowledgement;
        static const Enum::YLeaf bind_error;
        static const Enum::YLeaf bind_refresh;
        static const Enum::YLeaf bind_update;
        static const Enum::YLeaf cot;
        static const Enum::YLeaf coti;
        static const Enum::YLeaf hot;
        static const Enum::YLeaf hoti;

};

class Bgp_Ipv6_Af_TypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf mdt;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf mvpn;

};

class RedistOspfExternalTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};

class LimitDcNonDcTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf disable;

};

class WeekdayTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Mon;
        static const Enum::YLeaf Tue;
        static const Enum::YLeaf Wed;
        static const Enum::YLeaf Thu;
        static const Enum::YLeaf Fri;
        static const Enum::YLeaf Sat;
        static const Enum::YLeaf Sun;

};

class AccessListInOutTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class AclUdpPortTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf biff;
        static const Enum::YLeaf bootpc;
        static const Enum::YLeaf bootps;
        static const Enum::YLeaf discard;
        static const Enum::YLeaf dnsix;
        static const Enum::YLeaf domain;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf isakmp;
        static const Enum::YLeaf mobile_ip;
        static const Enum::YLeaf nameserver;
        static const Enum::YLeaf netbios_dgm;
        static const Enum::YLeaf netbios_ns;
        static const Enum::YLeaf netbios_ss;
        static const Enum::YLeaf non500_isakmp;
        static const Enum::YLeaf ntp;
        static const Enum::YLeaf pim_auto_rp;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf ripv6;
        static const Enum::YLeaf snmp;
        static const Enum::YLeaf snmptrap;
        static const Enum::YLeaf sunrpc;
        static const Enum::YLeaf syslog;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf talk;
        static const Enum::YLeaf tftp;
        static const Enum::YLeaf time;
        static const Enum::YLeaf who;
        static const Enum::YLeaf xdmcp;

};

class CommunityWellKnownTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf gshut;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf local_AS;
        static const Enum::YLeaf no_advertise;
        static const Enum::YLeaf no_export;

};


}
}

#endif /* _CISCO_IOS_XE_TYPES_ */

