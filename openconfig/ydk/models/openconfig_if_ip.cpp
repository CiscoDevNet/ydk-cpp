
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_if_ip.hpp"

namespace ydk {
namespace openconfig_if_ip {


const Enum::Value NeighborOriginEnum::OTHER {0, "OTHER"};
const Enum::Value NeighborOriginEnum::STATIC {1, "STATIC"};
const Enum::Value NeighborOriginEnum::DYNAMIC {2, "DYNAMIC"};

const Enum::Value IpAddressOriginEnum::OTHER {0, "OTHER"};
const Enum::Value IpAddressOriginEnum::STATIC {1, "STATIC"};
const Enum::Value IpAddressOriginEnum::DHCP {2, "DHCP"};
const Enum::Value IpAddressOriginEnum::LINK_LAYER {3, "LINK_LAYER"};
const Enum::Value IpAddressOriginEnum::RANDOM {4, "RANDOM"};


}
}

