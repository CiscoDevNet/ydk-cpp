
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_types.hpp"

namespace ydk {
namespace openconfig_bgp_types {

AfiSafiTypeIdentity::AfiSafiTypeIdentity()
     : Identity("openconfig-bgp-types:afi-safi-type")
{
}

AfiSafiTypeIdentity::~AfiSafiTypeIdentity()
{
}

BgpCapabilityIdentity::BgpCapabilityIdentity()
     : Identity("openconfig-bgp-types:bgp-capability")
{
}

BgpCapabilityIdentity::~BgpCapabilityIdentity()
{
}

BgpWellKnownStdCommunityIdentity::BgpWellKnownStdCommunityIdentity()
     : Identity("openconfig-bgp-types:bgp-well-known-std-community")
{
}

BgpWellKnownStdCommunityIdentity::~BgpWellKnownStdCommunityIdentity()
{
}

RouteRefreshIdentity::RouteRefreshIdentity()
     : Identity("openconfig-bgp-types:ROUTE-REFRESH")
{
}

RouteRefreshIdentity::~RouteRefreshIdentity()
{
}

No_Export_SubconfedIdentity::No_Export_SubconfedIdentity()
     : Identity("openconfig-bgp-types:NO_EXPORT_SUBCONFED")
{
}

No_Export_SubconfedIdentity::~No_Export_SubconfedIdentity()
{
}

No_AdvertiseIdentity::No_AdvertiseIdentity()
     : Identity("openconfig-bgp-types:NO_ADVERTISE")
{
}

No_AdvertiseIdentity::~No_AdvertiseIdentity()
{
}

MpbgpIdentity::MpbgpIdentity()
     : Identity("openconfig-bgp-types:MPBGP")
{
}

MpbgpIdentity::~MpbgpIdentity()
{
}

Ipv4UnicastIdentity::Ipv4UnicastIdentity()
     : Identity("openconfig-bgp-types:ipv4-unicast")
{
}

Ipv4UnicastIdentity::~Ipv4UnicastIdentity()
{
}

AddPathsIdentity::AddPathsIdentity()
     : Identity("openconfig-bgp-types:ADD-PATHS")
{
}

AddPathsIdentity::~AddPathsIdentity()
{
}

L3VpnIpv4MulticastIdentity::L3VpnIpv4MulticastIdentity()
     : Identity("openconfig-bgp-types:l3vpn-ipv4-multicast")
{
}

L3VpnIpv4MulticastIdentity::~L3VpnIpv4MulticastIdentity()
{
}

No_ExportIdentity::No_ExportIdentity()
     : Identity("openconfig-bgp-types:NO_EXPORT")
{
}

No_ExportIdentity::~No_ExportIdentity()
{
}

L2VpnEvpnIdentity::L2VpnEvpnIdentity()
     : Identity("openconfig-bgp-types:l2vpn-evpn")
{
}

L2VpnEvpnIdentity::~L2VpnEvpnIdentity()
{
}

Ipv4LabelledUnicastIdentity::Ipv4LabelledUnicastIdentity()
     : Identity("openconfig-bgp-types:ipv4-labelled-unicast")
{
}

Ipv4LabelledUnicastIdentity::~Ipv4LabelledUnicastIdentity()
{
}

L3VpnIpv6UnicastIdentity::L3VpnIpv6UnicastIdentity()
     : Identity("openconfig-bgp-types:l3vpn-ipv6-unicast")
{
}

L3VpnIpv6UnicastIdentity::~L3VpnIpv6UnicastIdentity()
{
}

Ipv6LabelledUnicastIdentity::Ipv6LabelledUnicastIdentity()
     : Identity("openconfig-bgp-types:ipv6-labelled-unicast")
{
}

Ipv6LabelledUnicastIdentity::~Ipv6LabelledUnicastIdentity()
{
}

L3VpnIpv6MulticastIdentity::L3VpnIpv6MulticastIdentity()
     : Identity("openconfig-bgp-types:l3vpn-ipv6-multicast")
{
}

L3VpnIpv6MulticastIdentity::~L3VpnIpv6MulticastIdentity()
{
}

GracefulRestartIdentity::GracefulRestartIdentity()
     : Identity("openconfig-bgp-types:GRACEFUL-RESTART")
{
}

GracefulRestartIdentity::~GracefulRestartIdentity()
{
}

Ipv6UnicastIdentity::Ipv6UnicastIdentity()
     : Identity("openconfig-bgp-types:ipv6-unicast")
{
}

Ipv6UnicastIdentity::~Ipv6UnicastIdentity()
{
}

L2VpnVplsIdentity::L2VpnVplsIdentity()
     : Identity("openconfig-bgp-types:l2vpn-vpls")
{
}

L2VpnVplsIdentity::~L2VpnVplsIdentity()
{
}

Asn32Identity::Asn32Identity()
     : Identity("openconfig-bgp-types:ASN32")
{
}

Asn32Identity::~Asn32Identity()
{
}

L3VpnIpv4UnicastIdentity::L3VpnIpv4UnicastIdentity()
     : Identity("openconfig-bgp-types:l3vpn-ipv4-unicast")
{
}

L3VpnIpv4UnicastIdentity::~L3VpnIpv4UnicastIdentity()
{
}

NopeerIdentity::NopeerIdentity()
     : Identity("openconfig-bgp-types:NOPEER")
{
}

NopeerIdentity::~NopeerIdentity()
{
}

const Enum::YLeaf RemovePrivateAsOptionEnum::ALL {0, "ALL"};
const Enum::YLeaf RemovePrivateAsOptionEnum::REPLACE {1, "REPLACE"};

const Enum::YLeaf CommunityTypeEnum::STANDARD {0, "STANDARD"};
const Enum::YLeaf CommunityTypeEnum::EXTENDED {1, "EXTENDED"};
const Enum::YLeaf CommunityTypeEnum::BOTH {2, "BOTH"};
const Enum::YLeaf CommunityTypeEnum::NONE {3, "NONE"};

const Enum::YLeaf PeerTypeEnum::INTERNAL {0, "INTERNAL"};
const Enum::YLeaf PeerTypeEnum::EXTERNAL {1, "EXTERNAL"};

const Enum::YLeaf BgpSessionDirectionEnum::INBOUND {0, "INBOUND"};
const Enum::YLeaf BgpSessionDirectionEnum::OUTBOUND {1, "OUTBOUND"};

const Enum::YLeaf BgpOriginAttrTypeEnum::IGP {0, "IGP"};
const Enum::YLeaf BgpOriginAttrTypeEnum::EGP {1, "EGP"};
const Enum::YLeaf BgpOriginAttrTypeEnum::INCOMPLETE {2, "INCOMPLETE"};


}
}

