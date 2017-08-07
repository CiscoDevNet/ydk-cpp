#ifndef _OPENCONFIG_BGP_TYPES_
#define _OPENCONFIG_BGP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_bgp_types {

class Remove_Private_As_Option : public virtual ydk::Identity
{
    public:
        Remove_Private_As_Option();
        ~Remove_Private_As_Option();


}; // Remove_Private_As_Option

class Bgp_Capability : public virtual ydk::Identity
{
    public:
        Bgp_Capability();
        ~Bgp_Capability();


}; // Bgp_Capability

class Afi_Safi_Type : public virtual ydk::Identity
{
    public:
        Afi_Safi_Type();
        ~Afi_Safi_Type();


}; // Afi_Safi_Type

class Bgp_Well_Known_Std_Community : public virtual ydk::Identity
{
    public:
        Bgp_Well_Known_Std_Community();
        ~Bgp_Well_Known_Std_Community();


}; // Bgp_Well_Known_Std_Community

class Private_As_Remove_All : public openconfig_bgp_types::Remove_Private_As_Option, virtual ydk::Identity
{
    public:
        Private_As_Remove_All();
        ~Private_As_Remove_All();


}; // Private_As_Remove_All

class Mpbgp : public openconfig_bgp_types::Bgp_Capability, virtual ydk::Identity
{
    public:
        Mpbgp();
        ~Mpbgp();


}; // Mpbgp

class Ipv4_Labeled_Unicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        Ipv4_Labeled_Unicast();
        ~Ipv4_Labeled_Unicast();


}; // Ipv4_Labeled_Unicast

class Private_As_Replace_All : public openconfig_bgp_types::Remove_Private_As_Option, virtual ydk::Identity
{
    public:
        Private_As_Replace_All();
        ~Private_As_Replace_All();


}; // Private_As_Replace_All

class Asn32 : public openconfig_bgp_types::Bgp_Capability, virtual ydk::Identity
{
    public:
        Asn32();
        ~Asn32();


}; // Asn32

class L3Vpn_Ipv4_Multicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        L3Vpn_Ipv4_Multicast();
        ~L3Vpn_Ipv4_Multicast();


}; // L3Vpn_Ipv4_Multicast

class No_Advertise : public openconfig_bgp_types::Bgp_Well_Known_Std_Community, virtual ydk::Identity
{
    public:
        No_Advertise();
        ~No_Advertise();


}; // No_Advertise

class Ipv4_Unicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        Ipv4_Unicast();
        ~Ipv4_Unicast();


}; // Ipv4_Unicast

class Ipv6_Labeled_Unicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        Ipv6_Labeled_Unicast();
        ~Ipv6_Labeled_Unicast();


}; // Ipv6_Labeled_Unicast

class Nopeer : public openconfig_bgp_types::Bgp_Well_Known_Std_Community, virtual ydk::Identity
{
    public:
        Nopeer();
        ~Nopeer();


}; // Nopeer

class L2Vpn_Vpls : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        L2Vpn_Vpls();
        ~L2Vpn_Vpls();


}; // L2Vpn_Vpls

class L3Vpn_Ipv4_Unicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        L3Vpn_Ipv4_Unicast();
        ~L3Vpn_Ipv4_Unicast();


}; // L3Vpn_Ipv4_Unicast

class L2Vpn_Evpn : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        L2Vpn_Evpn();
        ~L2Vpn_Evpn();


}; // L2Vpn_Evpn

class L3Vpn_Ipv6_Unicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        L3Vpn_Ipv6_Unicast();
        ~L3Vpn_Ipv6_Unicast();


}; // L3Vpn_Ipv6_Unicast

class Add_Paths : public openconfig_bgp_types::Bgp_Capability, virtual ydk::Identity
{
    public:
        Add_Paths();
        ~Add_Paths();


}; // Add_Paths

class Route_Refresh : public openconfig_bgp_types::Bgp_Capability, virtual ydk::Identity
{
    public:
        Route_Refresh();
        ~Route_Refresh();


}; // Route_Refresh

class Graceful_Restart : public openconfig_bgp_types::Bgp_Capability, virtual ydk::Identity
{
    public:
        Graceful_Restart();
        ~Graceful_Restart();


}; // Graceful_Restart

class L3Vpn_Ipv6_Multicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        L3Vpn_Ipv6_Multicast();
        ~L3Vpn_Ipv6_Multicast();


}; // L3Vpn_Ipv6_Multicast

class Ipv6_Unicast : public openconfig_bgp_types::Afi_Safi_Type, virtual ydk::Identity
{
    public:
        Ipv6_Unicast();
        ~Ipv6_Unicast();


}; // Ipv6_Unicast

class No_Export_Subconfed : public openconfig_bgp_types::Bgp_Well_Known_Std_Community, virtual ydk::Identity
{
    public:
        No_Export_Subconfed();
        ~No_Export_Subconfed();


}; // No_Export_Subconfed

class No_Export : public openconfig_bgp_types::Bgp_Well_Known_Std_Community, virtual ydk::Identity
{
    public:
        No_Export();
        ~No_Export();


}; // No_Export

class CommunityType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf STANDARD;
        static const ydk::Enum::YLeaf EXTENDED;
        static const ydk::Enum::YLeaf BOTH;
        static const ydk::Enum::YLeaf NONE;

};

class BgpOriginAttrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf IGP;
        static const ydk::Enum::YLeaf EGP;
        static const ydk::Enum::YLeaf INCOMPLETE;

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


}
}

#endif /* _OPENCONFIG_BGP_TYPES_ */

