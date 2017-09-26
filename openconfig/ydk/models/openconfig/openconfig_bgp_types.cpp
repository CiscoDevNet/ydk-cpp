
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_types.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_bgp_types {

AFISAFITYPE::AFISAFITYPE()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:AFI_SAFI_TYPE")
{

}

AFISAFITYPE::~AFISAFITYPE()
{
}

BGPCAPABILITY::BGPCAPABILITY()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:BGP_CAPABILITY")
{

}

BGPCAPABILITY::~BGPCAPABILITY()
{
}

BGPWELLKNOWNSTDCOMMUNITY::BGPWELLKNOWNSTDCOMMUNITY()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:BGP_WELL_KNOWN_STD_COMMUNITY")
{

}

BGPWELLKNOWNSTDCOMMUNITY::~BGPWELLKNOWNSTDCOMMUNITY()
{
}

REMOVEPRIVATEASOPTION::REMOVEPRIVATEASOPTION()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:REMOVE_PRIVATE_AS_OPTION")
{

}

REMOVEPRIVATEASOPTION::~REMOVEPRIVATEASOPTION()
{
}

ADDPATHS::ADDPATHS()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:ADD_PATHS")
{

}

ADDPATHS::~ADDPATHS()
{
}

ASN32::ASN32()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:ASN32")
{

}

ASN32::~ASN32()
{
}

GRACEFULRESTART::GRACEFULRESTART()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:GRACEFUL_RESTART")
{

}

GRACEFULRESTART::~GRACEFULRESTART()
{
}

IPV4LABELEDUNICAST::IPV4LABELEDUNICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV4_LABELED_UNICAST")
{

}

IPV4LABELEDUNICAST::~IPV4LABELEDUNICAST()
{
}

IPV4UNICAST::IPV4UNICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV4_UNICAST")
{

}

IPV4UNICAST::~IPV4UNICAST()
{
}

IPV6LABELEDUNICAST::IPV6LABELEDUNICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV6_LABELED_UNICAST")
{

}

IPV6LABELEDUNICAST::~IPV6LABELEDUNICAST()
{
}

IPV6UNICAST::IPV6UNICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:IPV6_UNICAST")
{

}

IPV6UNICAST::~IPV6UNICAST()
{
}

L2VPNEVPN::L2VPNEVPN()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L2VPN_EVPN")
{

}

L2VPNEVPN::~L2VPNEVPN()
{
}

L2VPNVPLS::L2VPNVPLS()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L2VPN_VPLS")
{

}

L2VPNVPLS::~L2VPNVPLS()
{
}

L3VPNIPV4MULTICAST::L3VPNIPV4MULTICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV4_MULTICAST")
{

}

L3VPNIPV4MULTICAST::~L3VPNIPV4MULTICAST()
{
}

L3VPNIPV4UNICAST::L3VPNIPV4UNICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV4_UNICAST")
{

}

L3VPNIPV4UNICAST::~L3VPNIPV4UNICAST()
{
}

L3VPNIPV6MULTICAST::L3VPNIPV6MULTICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV6_MULTICAST")
{

}

L3VPNIPV6MULTICAST::~L3VPNIPV6MULTICAST()
{
}

L3VPNIPV6UNICAST::L3VPNIPV6UNICAST()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:L3VPN_IPV6_UNICAST")
{

}

L3VPNIPV6UNICAST::~L3VPNIPV6UNICAST()
{
}

MPBGP::MPBGP()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:MPBGP")
{

}

MPBGP::~MPBGP()
{
}

NOADVERTISE::NOADVERTISE()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NO_ADVERTISE")
{

}

NOADVERTISE::~NOADVERTISE()
{
}

NOEXPORT::NOEXPORT()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NO_EXPORT")
{

}

NOEXPORT::~NOEXPORT()
{
}

NOEXPORTSUBCONFED::NOEXPORTSUBCONFED()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NO_EXPORT_SUBCONFED")
{

}

NOEXPORTSUBCONFED::~NOEXPORTSUBCONFED()
{
}

NOPEER::NOPEER()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:NOPEER")
{

}

NOPEER::~NOPEER()
{
}

PRIVATEASREMOVEALL::PRIVATEASREMOVEALL()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:PRIVATE_AS_REMOVE_ALL")
{

}

PRIVATEASREMOVEALL::~PRIVATEASREMOVEALL()
{
}

PRIVATEASREPLACEALL::PRIVATEASREPLACEALL()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:PRIVATE_AS_REPLACE_ALL")
{

}

PRIVATEASREPLACEALL::~PRIVATEASREPLACEALL()
{
}

ROUTEREFRESH::ROUTEREFRESH()
     : Identity("http://openconfig.net/yang/bgp-types", "openconfig-bgp-types", "openconfig-bgp-types:ROUTE_REFRESH")
{

}

ROUTEREFRESH::~ROUTEREFRESH()
{
}

const Enum::YLeaf BgpOriginAttrType::IGP {0, "IGP"};
const Enum::YLeaf BgpOriginAttrType::EGP {1, "EGP"};
const Enum::YLeaf BgpOriginAttrType::INCOMPLETE {2, "INCOMPLETE"};

const Enum::YLeaf CommunityType::STANDARD {0, "STANDARD"};
const Enum::YLeaf CommunityType::EXTENDED {1, "EXTENDED"};
const Enum::YLeaf CommunityType::BOTH {2, "BOTH"};
const Enum::YLeaf CommunityType::NONE {3, "NONE"};

const Enum::YLeaf PeerType::INTERNAL {0, "INTERNAL"};
const Enum::YLeaf PeerType::EXTERNAL {1, "EXTERNAL"};

const Enum::YLeaf BgpSessionDirection::INBOUND {0, "INBOUND"};
const Enum::YLeaf BgpSessionDirection::OUTBOUND {1, "OUTBOUND"};


}
}

