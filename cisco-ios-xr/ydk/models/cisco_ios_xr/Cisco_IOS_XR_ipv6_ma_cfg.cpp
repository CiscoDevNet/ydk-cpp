
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ma_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ma_cfg {

const Enum::YLeaf Ipv6SelfPingEnum::disabled {0, "disabled"};
const Enum::YLeaf Ipv6SelfPingEnum::enabled {1, "enabled"};

const Enum::YLeaf Ipv6QppbEnum::none {0, "none"};
const Enum::YLeaf Ipv6QppbEnum::ip_precedence {1, "ip-precedence"};
const Enum::YLeaf Ipv6QppbEnum::qos_group {2, "qos-group"};
const Enum::YLeaf Ipv6QppbEnum::both {3, "both"};

const Enum::YLeaf Ipv6DefaultPingEnum::disabled {0, "disabled"};
const Enum::YLeaf Ipv6DefaultPingEnum::enabled {1, "enabled"};

const Enum::YLeaf Ipv6ReachableEnum::any {0, "any"};
const Enum::YLeaf Ipv6ReachableEnum::received {1, "received"};


}
}

