#ifndef _OPENCONFIG_PACKET_MATCH_TYPES_
#define _OPENCONFIG_PACKET_MATCH_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_packet_match_types {

class ETHERTYPE : public virtual ydk::Identity
{
    public:
        ETHERTYPE();
        ~ETHERTYPE();


}; // ETHERTYPE

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

class ETHERTYPEIPV4 : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEIPV4();
        ~ETHERTYPEIPV4();


}; // ETHERTYPEIPV4

class ETHERTYPEARP : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEARP();
        ~ETHERTYPEARP();


}; // ETHERTYPEARP

class ETHERTYPEVLAN : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEVLAN();
        ~ETHERTYPEVLAN();


}; // ETHERTYPEVLAN

class ETHERTYPEIPV6 : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEIPV6();
        ~ETHERTYPEIPV6();


}; // ETHERTYPEIPV6

class ETHERTYPEMPLS : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEMPLS();
        ~ETHERTYPEMPLS();


}; // ETHERTYPEMPLS

class ETHERTYPELLDP : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPELLDP();
        ~ETHERTYPELLDP();


}; // ETHERTYPELLDP

class ETHERTYPEROCE : public openconfig::openconfig_packet_match_types::ETHERTYPE, virtual ydk::Identity
{
    public:
        ETHERTYPEROCE();
        ~ETHERTYPEROCE();


}; // ETHERTYPEROCE

class IPTCP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPTCP();
        ~IPTCP();


}; // IPTCP

class IPUDP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPUDP();
        ~IPUDP();


}; // IPUDP

class IPICMP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPICMP();
        ~IPICMP();


}; // IPICMP

class IPIGMP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPIGMP();
        ~IPIGMP();


}; // IPIGMP

class IPPIM : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPPIM();
        ~IPPIM();


}; // IPPIM

class IPRSVP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPRSVP();
        ~IPRSVP();


}; // IPRSVP

class IPGRE : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPGRE();
        ~IPGRE();


}; // IPGRE

class IPAUTH : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPAUTH();
        ~IPAUTH();


}; // IPAUTH

class IPL2TP : public openconfig::openconfig_packet_match_types::IPPROTOCOL, virtual ydk::Identity
{
    public:
        IPL2TP();
        ~IPL2TP();


}; // IPL2TP

class TCPSYN : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPSYN();
        ~TCPSYN();


}; // TCPSYN

class TCPFIN : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPFIN();
        ~TCPFIN();


}; // TCPFIN

class TCPRST : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPRST();
        ~TCPRST();


}; // TCPRST

class TCPPSH : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPPSH();
        ~TCPPSH();


}; // TCPPSH

class TCPACK : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPACK();
        ~TCPACK();


}; // TCPACK

class TCPURG : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPURG();
        ~TCPURG();


}; // TCPURG

class TCPECE : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPECE();
        ~TCPECE();


}; // TCPECE

class TCPCWR : public openconfig::openconfig_packet_match_types::TCPFLAGS, virtual ydk::Identity
{
    public:
        TCPCWR();
        ~TCPCWR();


}; // TCPCWR

class PortNumRange : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ANY;

};


}
}

#endif /* _OPENCONFIG_PACKET_MATCH_TYPES_ */

