
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ma_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ma_cfg {

const Enum::YLeaf Ipv6Qppb::none {0, "none"};
const Enum::YLeaf Ipv6Qppb::ip_precedence {1, "ip-precedence"};
const Enum::YLeaf Ipv6Qppb::qos_group {2, "qos-group"};
const Enum::YLeaf Ipv6Qppb::both {3, "both"};

const Enum::YLeaf Ipv6DefaultPing::disabled {0, "disabled"};
const Enum::YLeaf Ipv6DefaultPing::enabled {1, "enabled"};

const Enum::YLeaf Ipv6SelfPing::disabled {0, "disabled"};
const Enum::YLeaf Ipv6SelfPing::enabled {1, "enabled"};

const Enum::YLeaf Ipv6Reachable::any {0, "any"};
const Enum::YLeaf Ipv6Reachable::received {1, "received"};


}
}

