
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_if_ip.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace openconfig_if_ip {

const Enum::YLeaf NeighborOrigin::OTHER {0, "OTHER"};
const Enum::YLeaf NeighborOrigin::STATIC {1, "STATIC"};
const Enum::YLeaf NeighborOrigin::DYNAMIC {2, "DYNAMIC"};

const Enum::YLeaf IpAddressOrigin::OTHER {0, "OTHER"};
const Enum::YLeaf IpAddressOrigin::STATIC {1, "STATIC"};
const Enum::YLeaf IpAddressOrigin::DHCP {2, "DHCP"};
const Enum::YLeaf IpAddressOrigin::LINK_LAYER {3, "LINK_LAYER"};
const Enum::YLeaf IpAddressOrigin::RANDOM {4, "RANDOM"};


}
}

