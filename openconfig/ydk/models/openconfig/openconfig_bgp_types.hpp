#ifndef _OPENCONFIG_BGP_TYPES_
#define _OPENCONFIG_BGP_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace openconfig_bgp_types {

class AfiSafiTypeIdentity : public virtual Identity
{
    public:
        AfiSafiTypeIdentity();
        ~AfiSafiTypeIdentity();


}; // AfiSafiTypeIdentity

class BgpCapabilityIdentity : public virtual Identity
{
    public:
        BgpCapabilityIdentity();
        ~BgpCapabilityIdentity();


}; // BgpCapabilityIdentity

class BgpWellKnownStdCommunityIdentity : public virtual Identity
{
    public:
        BgpWellKnownStdCommunityIdentity();
        ~BgpWellKnownStdCommunityIdentity();


}; // BgpWellKnownStdCommunityIdentity

class RouteRefreshIdentity : public openconfig_bgp_types::BgpCapabilityIdentity, virtual Identity
{
    public:
        RouteRefreshIdentity();
        ~RouteRefreshIdentity();


}; // RouteRefreshIdentity

class No_Export_SubconfedIdentity : public openconfig_bgp_types::BgpWellKnownStdCommunityIdentity, virtual Identity
{
    public:
        No_Export_SubconfedIdentity();
        ~No_Export_SubconfedIdentity();


}; // No_Export_SubconfedIdentity

class No_AdvertiseIdentity : public openconfig_bgp_types::BgpWellKnownStdCommunityIdentity, virtual Identity
{
    public:
        No_AdvertiseIdentity();
        ~No_AdvertiseIdentity();


}; // No_AdvertiseIdentity

class MpbgpIdentity : public openconfig_bgp_types::BgpCapabilityIdentity, virtual Identity
{
    public:
        MpbgpIdentity();
        ~MpbgpIdentity();


}; // MpbgpIdentity

class Ipv4UnicastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        Ipv4UnicastIdentity();
        ~Ipv4UnicastIdentity();


}; // Ipv4UnicastIdentity

class AddPathsIdentity : public openconfig_bgp_types::BgpCapabilityIdentity, virtual Identity
{
    public:
        AddPathsIdentity();
        ~AddPathsIdentity();


}; // AddPathsIdentity

class L3VpnIpv4MulticastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        L3VpnIpv4MulticastIdentity();
        ~L3VpnIpv4MulticastIdentity();


}; // L3VpnIpv4MulticastIdentity

class No_ExportIdentity : public openconfig_bgp_types::BgpWellKnownStdCommunityIdentity, virtual Identity
{
    public:
        No_ExportIdentity();
        ~No_ExportIdentity();


}; // No_ExportIdentity

class L2VpnEvpnIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        L2VpnEvpnIdentity();
        ~L2VpnEvpnIdentity();


}; // L2VpnEvpnIdentity

class Ipv4LabelledUnicastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        Ipv4LabelledUnicastIdentity();
        ~Ipv4LabelledUnicastIdentity();


}; // Ipv4LabelledUnicastIdentity

class L3VpnIpv6UnicastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        L3VpnIpv6UnicastIdentity();
        ~L3VpnIpv6UnicastIdentity();


}; // L3VpnIpv6UnicastIdentity

class Ipv6LabelledUnicastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        Ipv6LabelledUnicastIdentity();
        ~Ipv6LabelledUnicastIdentity();


}; // Ipv6LabelledUnicastIdentity

class L3VpnIpv6MulticastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        L3VpnIpv6MulticastIdentity();
        ~L3VpnIpv6MulticastIdentity();


}; // L3VpnIpv6MulticastIdentity

class GracefulRestartIdentity : public openconfig_bgp_types::BgpCapabilityIdentity, virtual Identity
{
    public:
        GracefulRestartIdentity();
        ~GracefulRestartIdentity();


}; // GracefulRestartIdentity

class Ipv6UnicastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        Ipv6UnicastIdentity();
        ~Ipv6UnicastIdentity();


}; // Ipv6UnicastIdentity

class L2VpnVplsIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        L2VpnVplsIdentity();
        ~L2VpnVplsIdentity();


}; // L2VpnVplsIdentity

class Asn32Identity : public openconfig_bgp_types::BgpCapabilityIdentity, virtual Identity
{
    public:
        Asn32Identity();
        ~Asn32Identity();


}; // Asn32Identity

class L3VpnIpv4UnicastIdentity : public openconfig_bgp_types::AfiSafiTypeIdentity, virtual Identity
{
    public:
        L3VpnIpv4UnicastIdentity();
        ~L3VpnIpv4UnicastIdentity();


}; // L3VpnIpv4UnicastIdentity

class NopeerIdentity : public openconfig_bgp_types::BgpWellKnownStdCommunityIdentity, virtual Identity
{
    public:
        NopeerIdentity();
        ~NopeerIdentity();


}; // NopeerIdentity

class RemovePrivateAsOptionEnum : public Enum
{
    public:
        static const Enum::YLeaf ALL;
        static const Enum::YLeaf REPLACE;

};

class CommunityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf STANDARD;
        static const Enum::YLeaf EXTENDED;
        static const Enum::YLeaf BOTH;
        static const Enum::YLeaf NONE;

};

class PeerTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf INTERNAL;
        static const Enum::YLeaf EXTERNAL;

};

class BgpSessionDirectionEnum : public Enum
{
    public:
        static const Enum::YLeaf INBOUND;
        static const Enum::YLeaf OUTBOUND;

};

class BgpOriginAttrTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf IGP;
        static const Enum::YLeaf EGP;
        static const Enum::YLeaf INCOMPLETE;

};


}
}

#endif /* _OPENCONFIG_BGP_TYPES_ */

