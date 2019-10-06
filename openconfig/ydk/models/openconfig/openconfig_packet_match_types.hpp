#ifndef _OPENCONFIG_PACKET_MATCH_TYPES_
#define _OPENCONFIG_PACKET_MATCH_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_packet_match_types {

class IPPROTOCOL : public virtual ydk::Identity
{
    public:
        IPPROTOCOL();
        ~IPPROTOCOL();


}; // IPPROTOCOL

class TCPFLAGS : public virtual ydk::Identity
{
    public:
        TCPFLAGS();
        ~TCPFLAGS();


}; // TCPFLAGS

class ETHERTYPE : public virtual ydk::Identity
{
    public:
        ETHERTYPE();
        ~ETHERTYPE();


}; // ETHERTYPE

class TCPACK : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPACK();
        ~TCPACK();


}; // TCPACK

class IPUDP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPUDP();
        ~IPUDP();


}; // IPUDP

class ETHERTYPEARP : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEARP();
        ~ETHERTYPEARP();


}; // ETHERTYPEARP

class TCPSYN : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPSYN();
        ~TCPSYN();


}; // TCPSYN

class ETHERTYPEVLAN : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEVLAN();
        ~ETHERTYPEVLAN();


}; // ETHERTYPEVLAN

class TCPECE : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPECE();
        ~TCPECE();


}; // TCPECE

class IPICMP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPICMP();
        ~IPICMP();


}; // IPICMP

class TCPFIN : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPFIN();
        ~TCPFIN();


}; // TCPFIN

class ETHERTYPEROCE : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEROCE();
        ~ETHERTYPEROCE();


}; // ETHERTYPEROCE

class IPPIM : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPPIM();
        ~IPPIM();


}; // IPPIM

class TCPRST : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPRST();
        ~TCPRST();


}; // TCPRST

class ETHERTYPEIPV4 : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEIPV4();
        ~ETHERTYPEIPV4();


}; // ETHERTYPEIPV4

class IPTCP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPTCP();
        ~IPTCP();


}; // IPTCP

class ETHERTYPEIPV6 : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEIPV6();
        ~ETHERTYPEIPV6();


}; // ETHERTYPEIPV6

class TCPURG : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPURG();
        ~TCPURG();


}; // TCPURG

class IPRSVP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPRSVP();
        ~IPRSVP();


}; // IPRSVP

class ETHERTYPEMPLS : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEMPLS();
        ~ETHERTYPEMPLS();


}; // ETHERTYPEMPLS

class TCPPSH : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPPSH();
        ~TCPPSH();


}; // TCPPSH

class IPAUTH : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPAUTH();
        ~IPAUTH();


}; // IPAUTH

class IPGRE : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPGRE();
        ~IPGRE();


}; // IPGRE

class IPIGMP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPIGMP();
        ~IPIGMP();


}; // IPIGMP

class ETHERTYPELLDP : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPELLDP();
        ~ETHERTYPELLDP();


}; // ETHERTYPELLDP

class TCPCWR : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPCWR();
        ~TCPCWR();


}; // TCPCWR

class IPL2TP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPL2TP();
        ~IPL2TP();


}; // IPL2TP

class PortNumRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ANY;

        static int get_enum_value(const std::string & name) {
            if (name == "ANY") return 0;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_PACKET_MATCH_TYPES_ */

