
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_ip.hpp"

namespace ydk {
namespace ietf_ip {

const Enum::YLeaf NeighborOriginEnum::other {0, "other"};
const Enum::YLeaf NeighborOriginEnum::static_ {1, "static"};
const Enum::YLeaf NeighborOriginEnum::dynamic {2, "dynamic"};

const Enum::YLeaf IpAddressOriginEnum::other {0, "other"};
const Enum::YLeaf IpAddressOriginEnum::static_ {1, "static"};
const Enum::YLeaf IpAddressOriginEnum::dhcp {2, "dhcp"};
const Enum::YLeaf IpAddressOriginEnum::link_layer {3, "link-layer"};
const Enum::YLeaf IpAddressOriginEnum::random {4, "random"};


}
}

