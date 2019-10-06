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

        static int get_enum_value(const std::string & name) {
            if (name == "cos") return 0;
            if (name == "dscp") return 1;
            if (name == "exp") return 2;
            if (name == "precedence") return 3;
            return -1;
        }
};

class ExpValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf exp;
        static const ydk::Enum::YLeaf precedence;

        static int get_enum_value(const std::string & name) {
            if (name == "cos") return 0;
            if (name == "dscp") return 1;
            if (name == "exp") return 2;
            if (name == "precedence") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "BDI") return 0;
            if (name == "FastEthernet") return 1;
            if (name == "GigabitEthernet") return 2;
            if (name == "Loopback") return 3;
            if (name == "Port-channel") return 4;
            if (name == "Serial") return 5;
            if (name == "TenGigabitEthernet") return 6;
            if (name == "Vlan") return 7;
            if (name == "FiveGigabitEthernet") return 8;
            if (name == "TwentyFiveGigE") return 9;
            if (name == "TwoGigabitEthernet") return 10;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 0;
            if (name == "flash") return 1;
            if (name == "flash-override") return 2;
            if (name == "immediate") return 3;
            if (name == "internet") return 4;
            if (name == "network") return 5;
            if (name == "priority") return 6;
            if (name == "routine") return 7;
            return -1;
        }
};

class QosValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf exp;
        static const ydk::Enum::YLeaf precedence;

        static int get_enum_value(const std::string & name) {
            if (name == "cos") return 0;
            if (name == "dscp") return 1;
            if (name == "exp") return 2;
            if (name == "precedence") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            if (name == "multicast") return 1;
            if (name == "mdt") return 2;
            if (name == "tunnel") return 3;
            if (name == "labeled-unicast") return 4;
            if (name == "flowspec") return 5;
            if (name == "mvpn") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
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
            if (name == "default") return 0;
            if (name == "dscp") return 57;
            if (name == "ef") return 46;
            if (name == "precedence") return 58;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "bgp") return 179;
            if (name == "chargen") return 19;
            if (name == "cmd") return 514;
            if (name == "daytime") return 13;
            if (name == "discard") return 9;
            if (name == "domain") return 53;
            if (name == "echo") return 7;
            if (name == "exec") return 512;
            if (name == "finger") return 79;
            if (name == "ftp") return 21;
            if (name == "ftp-data") return 20;
            if (name == "gopher") return 70;
            if (name == "hostname") return 101;
            if (name == "ident") return 113;
            if (name == "irc") return 194;
            if (name == "klogin") return 543;
            if (name == "kshell") return 544;
            if (name == "login") return 513;
            if (name == "lpd") return 515;
            if (name == "msrpc") return 135;
            if (name == "nntp") return 119;
            if (name == "pim-auto-rp") return 496;
            if (name == "pop2") return 109;
            if (name == "pop3") return 110;
            if (name == "smtp") return 25;
            if (name == "sunrpc") return 111;
            if (name == "tacacs") return 49;
            if (name == "talk") return 517;
            if (name == "telnet") return 23;
            if (name == "time") return 37;
            if (name == "uucp") return 540;
            if (name == "whois") return 43;
            if (name == "www") return 80;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Jan") return 0;
            if (name == "Feb") return 1;
            if (name == "Mar") return 2;
            if (name == "Apr") return 3;
            if (name == "May") return 4;
            if (name == "Jun") return 5;
            if (name == "Jul") return 6;
            if (name == "Aug") return 7;
            if (name == "Sep") return 8;
            if (name == "Oct") return 9;
            if (name == "Nov") return 10;
            if (name == "Dec") return 11;
            return -1;
        }
};

class PrecValueType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf cos;
        static const ydk::Enum::YLeaf dscp;
        static const ydk::Enum::YLeaf exp;
        static const ydk::Enum::YLeaf precedence;

        static int get_enum_value(const std::string & name) {
            if (name == "cos") return 0;
            if (name == "dscp") return 1;
            if (name == "exp") return 2;
            if (name == "precedence") return 3;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "bind-acknowledgement") return 0;
            if (name == "bind-error") return 1;
            if (name == "bind-refresh") return 2;
            if (name == "bind-update") return 3;
            if (name == "cot") return 4;
            if (name == "coti") return 5;
            if (name == "hot") return 6;
            if (name == "hoti") return 7;
            return -1;
        }
};

class BgpIpv6AfType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf mdt;
        static const ydk::Enum::YLeaf flowspec;
        static const ydk::Enum::YLeaf mvpn;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            if (name == "multicast") return 1;
            if (name == "mdt") return 2;
            if (name == "flowspec") return 3;
            if (name == "mvpn") return 4;
            return -1;
        }
};

class RedistOspfExternalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

        static int get_enum_value(const std::string & name) {
            if (name == "1") return 0;
            if (name == "2") return 1;
            return -1;
        }
};

class LimitDcNonDcType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "Mon") return 0;
            if (name == "Tue") return 1;
            if (name == "Wed") return 2;
            if (name == "Thu") return 3;
            if (name == "Fri") return 4;
            if (name == "Sat") return 5;
            if (name == "Sun") return 6;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "gshut") return 0;
            if (name == "internet") return 1;
            if (name == "local-AS") return 2;
            if (name == "no-advertise") return 3;
            if (name == "no-export") return 4;
            if (name == "additive") return 5;
            return -1;
        }
};

class AccessListInOutType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "biff") return 512;
            if (name == "bootpc") return 68;
            if (name == "bootps") return 67;
            if (name == "discard") return 9;
            if (name == "dnsix") return 195;
            if (name == "domain") return 53;
            if (name == "echo") return 7;
            if (name == "isakmp") return 500;
            if (name == "mobile-ip") return 434;
            if (name == "nameserver") return 42;
            if (name == "netbios-dgm") return 138;
            if (name == "netbios-ns") return 137;
            if (name == "netbios-ss") return 139;
            if (name == "non500-isakmp") return 4500;
            if (name == "ntp") return 123;
            if (name == "pim-auto-rp") return 496;
            if (name == "rip") return 520;
            if (name == "ripv6") return 521;
            if (name == "snmp") return 161;
            if (name == "snmptrap") return 162;
            if (name == "sunrpc") return 111;
            if (name == "syslog") return 514;
            if (name == "tacacs") return 49;
            if (name == "talk") return 517;
            if (name == "tftp") return 69;
            if (name == "time") return 37;
            if (name == "who") return 513;
            if (name == "xdmcp") return 177;
            return -1;
        }
};

class CommunityWellKnownType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf gshut;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf local_AS;
        static const ydk::Enum::YLeaf no_advertise;
        static const ydk::Enum::YLeaf no_export;

        static int get_enum_value(const std::string & name) {
            if (name == "gshut") return 0;
            if (name == "internet") return 1;
            if (name == "local-AS") return 2;
            if (name == "no-advertise") return 3;
            if (name == "no-export") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_TYPES_ */

