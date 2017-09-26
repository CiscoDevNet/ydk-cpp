
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_drivers_media_eth_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_media_eth_cfg {

const Enum::YLeaf EthernetPfc::on {1, "on"};

const Enum::YLeaf EthernetFec::none {0, "none"};
const Enum::YLeaf EthernetFec::standard {1, "standard"};

const Enum::YLeaf EthernetIpg::non_standard {16, "non-standard"};

const Enum::YLeaf EthernetFlowCtrl::ingress {0, "ingress"};
const Enum::YLeaf EthernetFlowCtrl::egress {1, "egress"};
const Enum::YLeaf EthernetFlowCtrl::bidirectional {2, "bidirectional"};

const Enum::YLeaf EthernetDuplex::full {0, "full"};
const Enum::YLeaf EthernetDuplex::half {1, "half"};

const Enum::YLeaf EthernetAutoNegotiation::true_ {1, "true"};
const Enum::YLeaf EthernetAutoNegotiation::override {2, "override"};

const Enum::YLeaf EthernetSpeed::Y_10 {10, "10"};
const Enum::YLeaf EthernetSpeed::Y_100 {100, "100"};
const Enum::YLeaf EthernetSpeed::Y_1000 {1000, "1000"};

const Enum::YLeaf EthernetLoopback::external {0, "external"};
const Enum::YLeaf EthernetLoopback::internal {1, "internal"};
const Enum::YLeaf EthernetLoopback::line {2, "line"};


}
}

