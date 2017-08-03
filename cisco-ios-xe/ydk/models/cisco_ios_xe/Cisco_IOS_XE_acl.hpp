#ifndef _CISCO_IOS_XE_ACL_
#define _CISCO_IOS_XE_ACL_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_acl {

class AclPortType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf chargen;
        static const ydk::Enum::YLeaf daytime;
        static const ydk::Enum::YLeaf discard;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf finger;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf ftp_data;
        static const ydk::Enum::YLeaf gopher;
        static const ydk::Enum::YLeaf hostname;
        static const ydk::Enum::YLeaf ident;
        static const ydk::Enum::YLeaf irc;
        static const ydk::Enum::YLeaf klogin;
        static const ydk::Enum::YLeaf kshell;
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
        static const ydk::Enum::YLeaf biff;
        static const ydk::Enum::YLeaf bootpc;
        static const ydk::Enum::YLeaf bootps;
        static const ydk::Enum::YLeaf dnsix;
        static const ydk::Enum::YLeaf isakmp;
        static const ydk::Enum::YLeaf mobile_ip;
        static const ydk::Enum::YLeaf nameserver;
        static const ydk::Enum::YLeaf netbios_dgm;
        static const ydk::Enum::YLeaf netbios_ns;
        static const ydk::Enum::YLeaf netbios_ss;
        static const ydk::Enum::YLeaf non500_isakmp;
        static const ydk::Enum::YLeaf ntp;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf ripv6;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf snmptrap;
        static const ydk::Enum::YLeaf syslog;
        static const ydk::Enum::YLeaf tftp;
        static const ydk::Enum::YLeaf who;
        static const ydk::Enum::YLeaf xdmcp;

};


}
}

#endif /* _CISCO_IOS_XE_ACL_ */

