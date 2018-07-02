#ifndef _CISCO_IOS_XE_TYPES_
#define _CISCO_IOS_XE_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_types {

class CosValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf exp;
        static const ydk::Enum::YLeaf precedence;

};

class ExpValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf exp;
        static const ydk::Enum::YLeaf precedence;

};

class InterfaceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf BDI;
        static const ydk::Enum::YLeaf FastEthernet;
        static const ydk::Enum::YLeaf GigabitEthernet;
        static const ydk::Enum::YLeaf Loopback;
        static const ydk::Enum::YLeaf Port_channel;
        static const ydk::Enum::YLeaf Serial;
        static const ydk::Enum::YLeaf TenGigabitEthernet;
        static const ydk::Enum::YLeaf Vlan;
        static const ydk::Enum::YLeaf FiveGigabitEthernet;
        static const ydk::Enum::YLeaf TwentyFiveGigE;
        static const ydk::Enum::YLeaf TwoGigabitEthernet;

};

class PrecedenceType : public ydk::Enum
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

class QosValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf exp;
        static const ydk::Enum::YLeaf precedence;

};

class BgpIpv4AfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf mdt;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf labeled_unicast;
        static const ydk::Enum::YLeaf flowspec;
        static const ydk::Enum::YLeaf mvpn;

};

class DscpType : public ydk::Enum
{
    public:
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
        static const ydk::Enum::YLeaf default_;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf ef;
        static const ydk::Enum::YLeaf precedence;

};

class AclTcpPortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf chargen;
        static const ydk::Enum::YLeaf cmd;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf exec;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf ftp_data;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf klogin;
        static const ydk::Enum::YLeaf kshell;
        static const ydk::Enum::YLeaf login;
        static const ydk::Enum::YLeaf lpd;
        static const ydk::Enum::YLeaf msrpc;
        static const ydk::Enum::YLeaf nntp;
        static const ydk::Enum::YLeaf pim_auto_rp;
        static const ydk::Enum::YLeaf pop2;
        static const ydk::Enum::YLeaf pop3;
        static const ydk::Enum::YLeaf smtp;
        static const ydk::Enum::YLeaf sunrpc;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf talk;
        static const ydk::Enum::YLeaf telnet;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf uucp;
        static const ydk::Enum::YLeaf whois;
        static const ydk::Enum::YLeaf www;

};

class MonthType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Jan;
        static const ydk::Enum::YLeaf Feb;
        static const ydk::Enum::YLeaf Mar;
        static const ydk::Enum::YLeaf Apr;
        static const ydk::Enum::YLeaf May;
        static const ydk::Enum::YLeaf Jun;
        static const ydk::Enum::YLeaf Jul;
        static const ydk::Enum::YLeaf Aug;
        static const ydk::Enum::YLeaf Sep;
        static const ydk::Enum::YLeaf Oct;
        static const ydk::Enum::YLeaf Nov;
        static const ydk::Enum::YLeaf Dec;

};

class PrecValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf exp;
        static const ydk::Enum::YLeaf precedence;

};

class MobilityType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bind_acknowledgement;
        static const ydk::Enum::YLeaf bind_error;
        static const ydk::Enum::YLeaf bind_refresh;
        static const ydk::Enum::YLeaf bind_update;
        static const ydk::Enum::YLeaf cot;
        static const ydk::Enum::YLeaf coti;
        static const ydk::Enum::YLeaf hot;
        static const ydk::Enum::YLeaf hoti;

};

class BgpIpv6AfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf mdt;
        static const ydk::Enum::YLeaf flowspec;
        static const ydk::Enum::YLeaf mvpn;

};

class RedistOspfExternalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class LimitDcNonDcType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

};

class WeekdayType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Mon;
        static const ydk::Enum::YLeaf Tue;
        static const ydk::Enum::YLeaf Wed;
        static const ydk::Enum::YLeaf Thu;
        static const ydk::Enum::YLeaf Fri;
        static const ydk::Enum::YLeaf Sat;
        static const ydk::Enum::YLeaf Sun;

};

class CommunityWellKnownAddType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gshut;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf local_AS;
        static const ydk::Enum::YLeaf no_advertise;
        static const ydk::Enum::YLeaf no_export;
        static const ydk::Enum::YLeaf additive;

};

class AccessListInOutType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class AclUdpPortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf biff;
        static const ydk::Enum::YLeaf bootpc;
        static const ydk::Enum::YLeaf bootps;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf dnsix;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf isakmp;
        static const ydk::Enum::YLeaf mobile_ip;
        static const ydk::Enum::YLeaf nameserver;
        static const ydk::Enum::YLeaf netbios_dgm;
        static const ydk::Enum::YLeaf netbios_ns;
        static const ydk::Enum::YLeaf netbios_ss;
        static const ydk::Enum::YLeaf non500_isakmp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf pim_auto_rp;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf ripv6;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf sunrpc;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf talk;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf time;
        static const ydk::Enum::YLeaf who;
        static const ydk::Enum::YLeaf xdmcp;

};

class CommunityWellKnownType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gshut;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf local_AS;
        static const ydk::Enum::YLeaf no_advertise;
        static const ydk::Enum::YLeaf no_export;

};


}
}

#endif /* _CISCO_IOS_XE_TYPES_ */

