#ifndef _CISCO_IOS_XE_ACL_
#define _CISCO_IOS_XE_ACL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XE_acl {

class AclPortTypeEnum : public Enum
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
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf chargen;
        static const Enum::YLeaf cmd;
        static const Enum::YLeaf connectedapps_plain;
        static const Enum::YLeaf connectedapps_tls;
        static const Enum::YLeaf daytime;
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
        static const Enum::YLeaf pop2;
        static const Enum::YLeaf pop3;
        static const Enum::YLeaf smtp;
        static const Enum::YLeaf telnet;
        static const Enum::YLeaf uucp;
        static const Enum::YLeaf whois;
        static const Enum::YLeaf www;

};


}
}

#endif /* _CISCO_IOS_XE_ACL_ */

