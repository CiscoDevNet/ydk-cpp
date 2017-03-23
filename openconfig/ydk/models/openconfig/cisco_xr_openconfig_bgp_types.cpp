
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_xr_openconfig_bgp_types.hpp"

namespace ydk {
namespace cisco_xr_openconfig_bgp_types {

Afi_Safi_TypeIdentity::Afi_Safi_TypeIdentity()
     : Identity("cisco-xr-openconfig-bgp-types:AFI_SAFI_TYPE")
{
}

Afi_Safi_TypeIdentity::~Afi_Safi_TypeIdentity()
{
}

Ipv6_UnicastIdentity::Ipv6_UnicastIdentity()
     : Identity("cisco-xr-openconfig-bgp-types:IPV6_UNICAST")
{
}

Ipv6_UnicastIdentity::~Ipv6_UnicastIdentity()
{
}

Ipv4_UnicastIdentity::Ipv4_UnicastIdentity()
     : Identity("cisco-xr-openconfig-bgp-types:IPV4_UNICAST")
{
}

Ipv4_UnicastIdentity::~Ipv4_UnicastIdentity()
{
}

const Enum::YLeaf BgpOriginAttrTypeEnum::IGP {0, "IGP"};
const Enum::YLeaf BgpOriginAttrTypeEnum::EGP {1, "EGP"};
const Enum::YLeaf BgpOriginAttrTypeEnum::INCOMPLETE {2, "INCOMPLETE"};


}
}

