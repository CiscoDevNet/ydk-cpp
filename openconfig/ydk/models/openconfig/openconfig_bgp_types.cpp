
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_bgp_types {

Remove_Private_As_Option::Remove_Private_As_Option()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:REMOVE_PRIVATE_AS_OPTION")
{
}

Remove_Private_As_Option::~Remove_Private_As_Option()
{
}

Bgp_Capability::Bgp_Capability()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:BGP_CAPABILITY")
{
}

Bgp_Capability::~Bgp_Capability()
{
}

Afi_Safi_Type::Afi_Safi_Type()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:AFI_SAFI_TYPE")
{
}

Afi_Safi_Type::~Afi_Safi_Type()
{
}

Bgp_Well_Known_Std_Community::Bgp_Well_Known_Std_Community()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:BGP_WELL_KNOWN_STD_COMMUNITY")
{
}

Bgp_Well_Known_Std_Community::~Bgp_Well_Known_Std_Community()
{
}

Private_As_Remove_All::Private_As_Remove_All()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:PRIVATE_AS_REMOVE_ALL")
{
}

Private_As_Remove_All::~Private_As_Remove_All()
{
}

Mpbgp::Mpbgp()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:MPBGP")
{
}

Mpbgp::~Mpbgp()
{
}

Ipv4_Labeled_Unicast::Ipv4_Labeled_Unicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV4_LABELED_UNICAST")
{
}

Ipv4_Labeled_Unicast::~Ipv4_Labeled_Unicast()
{
}

Private_As_Replace_All::Private_As_Replace_All()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:PRIVATE_AS_REPLACE_ALL")
{
}

Private_As_Replace_All::~Private_As_Replace_All()
{
}

Asn32::Asn32()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:ASN32")
{
}

Asn32::~Asn32()
{
}

L3Vpn_Ipv4_Multicast::L3Vpn_Ipv4_Multicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV4_MULTICAST")
{
}

L3Vpn_Ipv4_Multicast::~L3Vpn_Ipv4_Multicast()
{
}

No_Advertise::No_Advertise()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NO_ADVERTISE")
{
}

No_Advertise::~No_Advertise()
{
}

Ipv4_Unicast::Ipv4_Unicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV4_UNICAST")
{
}

Ipv4_Unicast::~Ipv4_Unicast()
{
}

Ipv6_Labeled_Unicast::Ipv6_Labeled_Unicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV6_LABELED_UNICAST")
{
}

Ipv6_Labeled_Unicast::~Ipv6_Labeled_Unicast()
{
}

Nopeer::Nopeer()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NOPEER")
{
}

Nopeer::~Nopeer()
{
}

L2Vpn_Vpls::L2Vpn_Vpls()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L2VPN_VPLS")
{
}

L2Vpn_Vpls::~L2Vpn_Vpls()
{
}

L3Vpn_Ipv4_Unicast::L3Vpn_Ipv4_Unicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV4_UNICAST")
{
}

L3Vpn_Ipv4_Unicast::~L3Vpn_Ipv4_Unicast()
{
}

L2Vpn_Evpn::L2Vpn_Evpn()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L2VPN_EVPN")
{
}

L2Vpn_Evpn::~L2Vpn_Evpn()
{
}

L3Vpn_Ipv6_Unicast::L3Vpn_Ipv6_Unicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV6_UNICAST")
{
}

L3Vpn_Ipv6_Unicast::~L3Vpn_Ipv6_Unicast()
{
}

Add_Paths::Add_Paths()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:ADD_PATHS")
{
}

Add_Paths::~Add_Paths()
{
}

Route_Refresh::Route_Refresh()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:ROUTE_REFRESH")
{
}

Route_Refresh::~Route_Refresh()
{
}

Graceful_Restart::Graceful_Restart()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:GRACEFUL_RESTART")
{
}

Graceful_Restart::~Graceful_Restart()
{
}

L3Vpn_Ipv6_Multicast::L3Vpn_Ipv6_Multicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV6_MULTICAST")
{
}

L3Vpn_Ipv6_Multicast::~L3Vpn_Ipv6_Multicast()
{
}

Ipv6_Unicast::Ipv6_Unicast()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV6_UNICAST")
{
}

Ipv6_Unicast::~Ipv6_Unicast()
{
}

No_Export_Subconfed::No_Export_Subconfed()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NO_EXPORT_SUBCONFED")
{
}

No_Export_Subconfed::~No_Export_Subconfed()
{
}

No_Export::No_Export()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NO_EXPORT")
{
}

No_Export::~No_Export()
{
}

const Enum::YLeaf CommunityType::STANDARD {0, "STANDARD"};
const Enum::YLeaf CommunityType::EXTENDED {1, "EXTENDED"};
const Enum::YLeaf CommunityType::BOTH {2, "BOTH"};
const Enum::YLeaf CommunityType::NONE {3, "NONE"};

const Enum::YLeaf BgpOriginAttrType::IGP {0, "IGP"};
const Enum::YLeaf BgpOriginAttrType::EGP {1, "EGP"};
const Enum::YLeaf BgpOriginAttrType::INCOMPLETE {2, "INCOMPLETE"};

const Enum::YLeaf PeerType::INTERNAL {0, "INTERNAL"};
const Enum::YLeaf PeerType::EXTERNAL {1, "EXTERNAL"};

const Enum::YLeaf BgpSessionDirection::INBOUND {0, "INBOUND"};
const Enum::YLeaf BgpSessionDirection::OUTBOUND {1, "OUTBOUND"};


}
}

