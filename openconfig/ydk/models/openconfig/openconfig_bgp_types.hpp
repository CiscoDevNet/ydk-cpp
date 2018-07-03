#ifndef _OPENCONFIG_BGP_TYPES_
#define _OPENCONFIG_BGP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_bgp_types {

class BGPWELLKNOWNSTDCOMMUNITY : public virtual ydk::Identity
{
    public:
        BGPWELLKNOWNSTDCOMMUNITY();
        ~BGPWELLKNOWNSTDCOMMUNITY();


}; // BGPWELLKNOWNSTDCOMMUNITY

class BGPCAPABILITY : public virtual ydk::Identity
{
    public:
        BGPCAPABILITY();
        ~BGPCAPABILITY();


}; // BGPCAPABILITY

class REMOVEPRIVATEASOPTION : public virtual ydk::Identity
{
    public:
        REMOVEPRIVATEASOPTION();
        ~REMOVEPRIVATEASOPTION();


}; // REMOVEPRIVATEASOPTION

class AFISAFITYPE : public virtual ydk::Identity
{
    public:
        AFISAFITYPE();
        ~AFISAFITYPE();


}; // AFISAFITYPE

class GRACEFULRESTART : public openconfig::openconfig_bgp_types::BGPCAPABILITY, virtual ydk::Identity
{
    public:
        GRACEFULRESTART();
        ~GRACEFULRESTART();


}; // GRACEFULRESTART

class NOEXPORTSUBCONFED : public openconfig::openconfig_bgp_types::BGPWELLKNOWNSTDCOMMUNITY, virtual ydk::Identity
{
    public:
        NOEXPORTSUBCONFED();
        ~NOEXPORTSUBCONFED();


}; // NOEXPORTSUBCONFED

class NOADVERTISE : public openconfig::openconfig_bgp_types::BGPWELLKNOWNSTDCOMMUNITY, virtual ydk::Identity
{
    public:
        NOADVERTISE();
        ~NOADVERTISE();


}; // NOADVERTISE

class L2VPNEVPN : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        L2VPNEVPN();
        ~L2VPNEVPN();


}; // L2VPNEVPN

class NOPEER : public openconfig::openconfig_bgp_types::BGPWELLKNOWNSTDCOMMUNITY, virtual ydk::Identity
{
    public:
        NOPEER();
        ~NOPEER();


}; // NOPEER

class L2VPNVPLS : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        L2VPNVPLS();
        ~L2VPNVPLS();


}; // L2VPNVPLS

class IPV4UNICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV4UNICAST();
        ~IPV4UNICAST();


}; // IPV4UNICAST

class L3VPNIPV6MULTICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        L3VPNIPV6MULTICAST();
        ~L3VPNIPV6MULTICAST();


}; // L3VPNIPV6MULTICAST

class ROUTEREFRESH : public openconfig::openconfig_bgp_types::BGPCAPABILITY, virtual ydk::Identity
{
    public:
        ROUTEREFRESH();
        ~ROUTEREFRESH();


}; // ROUTEREFRESH

class PRIVATEASREPLACEALL : public openconfig::openconfig_bgp_types::REMOVEPRIVATEASOPTION, virtual ydk::Identity
{
    public:
        PRIVATEASREPLACEALL();
        ~PRIVATEASREPLACEALL();


}; // PRIVATEASREPLACEALL

class L3VPNIPV6UNICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        L3VPNIPV6UNICAST();
        ~L3VPNIPV6UNICAST();


}; // L3VPNIPV6UNICAST

class L3VPNIPV4UNICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        L3VPNIPV4UNICAST();
        ~L3VPNIPV4UNICAST();


}; // L3VPNIPV4UNICAST

class L3VPNIPV4MULTICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        L3VPNIPV4MULTICAST();
        ~L3VPNIPV4MULTICAST();


}; // L3VPNIPV4MULTICAST

class MPBGP : public openconfig::openconfig_bgp_types::BGPCAPABILITY, virtual ydk::Identity
{
    public:
        MPBGP();
        ~MPBGP();


}; // MPBGP

class IPV4LABELEDUNICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV4LABELEDUNICAST();
        ~IPV4LABELEDUNICAST();


}; // IPV4LABELEDUNICAST

class NOEXPORT : public openconfig::openconfig_bgp_types::BGPWELLKNOWNSTDCOMMUNITY, virtual ydk::Identity
{
    public:
        NOEXPORT();
        ~NOEXPORT();


}; // NOEXPORT

class IPV6UNICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV6UNICAST();
        ~IPV6UNICAST();


}; // IPV6UNICAST

class IPV6LABELEDUNICAST : public openconfig::openconfig_bgp_types::AFISAFITYPE, virtual ydk::Identity
{
    public:
        IPV6LABELEDUNICAST();
        ~IPV6LABELEDUNICAST();


}; // IPV6LABELEDUNICAST

class ASN32 : public openconfig::openconfig_bgp_types::BGPCAPABILITY, virtual ydk::Identity
{
    public:
        ASN32();
        ~ASN32();


}; // ASN32

class PRIVATEASREMOVEALL : public openconfig::openconfig_bgp_types::REMOVEPRIVATEASOPTION, virtual ydk::Identity
{
    public:
        PRIVATEASREMOVEALL();
        ~PRIVATEASREMOVEALL();


}; // PRIVATEASREMOVEALL

class ADDPATHS : public openconfig::openconfig_bgp_types::BGPCAPABILITY, virtual ydk::Identity
{
    public:
        ADDPATHS();
        ~ADDPATHS();


}; // ADDPATHS

class AsPathSegmentType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf AS_SEQ;
        static const ydk::Enum::YLeaf AS_SET;
        static const ydk::Enum::YLeaf AS_CONFED_SEQUENCE;
        static const ydk::Enum::YLeaf AS_CONFED_SET;

};

class CommunityType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf STANDARD;
        static const ydk::Enum::YLeaf EXTENDED;
        static const ydk::Enum::YLeaf BOTH;
        static const ydk::Enum::YLeaf NONE;

};

class PeerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INTERNAL;
        static const ydk::Enum::YLeaf EXTERNAL;

};

class BgpSessionDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf INBOUND;
        static const ydk::Enum::YLeaf OUTBOUND;

};

class BgpOriginAttrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGP;
        static const ydk::Enum::YLeaf EGP;
        static const ydk::Enum::YLeaf INCOMPLETE;

};


}
}

#endif /* _OPENCONFIG_BGP_TYPES_ */

