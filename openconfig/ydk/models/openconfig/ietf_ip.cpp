
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_ip.hpp"

using namespace ydk;

namespace openconfig {
namespace ietf_ip {

const Enum::YLeaf IpAddressOrigin::other {0, "other"};
const Enum::YLeaf IpAddressOrigin::static_ {1, "static"};
const Enum::YLeaf IpAddressOrigin::dhcp {2, "dhcp"};
const Enum::YLeaf IpAddressOrigin::link_layer {3, "link-layer"};
const Enum::YLeaf IpAddressOrigin::random {4, "random"};

const Enum::YLeaf NeighborOrigin::other {0, "other"};
const Enum::YLeaf NeighborOrigin::static_ {1, "static"};
const Enum::YLeaf NeighborOrigin::dynamic {2, "dynamic"};


}
}

