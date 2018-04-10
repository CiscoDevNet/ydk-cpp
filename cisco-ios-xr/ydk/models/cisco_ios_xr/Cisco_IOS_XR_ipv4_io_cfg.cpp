
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_io_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_io_cfg {

const Enum::YLeaf Ipv4Reachable::any {0, "any"};
const Enum::YLeaf Ipv4Reachable::received {1, "received"};

const Enum::YLeaf DhcpClientOptionCode::Y_60 {1, "60"};

const Enum::YLeaf Ipv4SelfPing::disabled {0, "disabled"};
const Enum::YLeaf Ipv4SelfPing::enabled {1, "enabled"};

const Enum::YLeaf Ipv4DefaultPing::disabled {0, "disabled"};
const Enum::YLeaf Ipv4DefaultPing::enabled {1, "enabled"};

const Enum::YLeaf Ipv4InterfaceQppb::ip_precedence {1, "ip-precedence"};
const Enum::YLeaf Ipv4InterfaceQppb::qos_group {2, "qos-group"};
const Enum::YLeaf Ipv4InterfaceQppb::both {3, "both"};


}
}

