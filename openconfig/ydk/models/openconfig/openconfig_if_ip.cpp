
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_if_ip.hpp"

namespace ydk {
namespace openconfig_if_ip {

const Enum::YLeaf NeighborOriginEnum::OTHER {0, "OTHER"};
const Enum::YLeaf NeighborOriginEnum::STATIC {1, "STATIC"};
const Enum::YLeaf NeighborOriginEnum::DYNAMIC {2, "DYNAMIC"};

const Enum::YLeaf IpAddressOriginEnum::OTHER {0, "OTHER"};
const Enum::YLeaf IpAddressOriginEnum::STATIC {1, "STATIC"};
const Enum::YLeaf IpAddressOriginEnum::DHCP {2, "DHCP"};
const Enum::YLeaf IpAddressOriginEnum::LINK_LAYER {3, "LINK_LAYER"};
const Enum::YLeaf IpAddressOriginEnum::RANDOM {4, "RANDOM"};


}
}

