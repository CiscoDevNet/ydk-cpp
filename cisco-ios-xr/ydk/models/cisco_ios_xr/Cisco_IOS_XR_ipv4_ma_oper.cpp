
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ma_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ma_oper {

const Enum::YLeaf Ipv4MaOperConfig::ipv4_ma_oper_client_none {0, "ipv4-ma-oper-client-none"};
const Enum::YLeaf Ipv4MaOperConfig::ipv4_ma_oper_non_oc_client {1, "ipv4-ma-oper-non-oc-client"};
const Enum::YLeaf Ipv4MaOperConfig::ipv4_ma_oper_oc_client {2, "ipv4-ma-oper-oc-client"};

const Enum::YLeaf RpfMode::strict {0, "strict"};
const Enum::YLeaf RpfMode::loose {1, "loose"};

const Enum::YLeaf Ipv4MaOperLineState::unknown {0, "unknown"};
const Enum::YLeaf Ipv4MaOperLineState::shutdown {1, "shutdown"};
const Enum::YLeaf Ipv4MaOperLineState::down {2, "down"};
const Enum::YLeaf Ipv4MaOperLineState::up {3, "up"};


}
}

