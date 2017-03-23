
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_drivers_media_eth_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_drivers_media_eth_cfg {

const Enum::YLeaf EthernetIpgEnum::non_standard {16, "non-standard"};

const Enum::YLeaf EthernetPfcEnum::on {1, "on"};

const Enum::YLeaf EthernetAutoNegotiationEnum::true_ {1, "true"};
const Enum::YLeaf EthernetAutoNegotiationEnum::override {2, "override"};

const Enum::YLeaf EthernetDuplexEnum::full {0, "full"};
const Enum::YLeaf EthernetDuplexEnum::half {1, "half"};

const Enum::YLeaf EthernetLoopbackEnum::external {0, "external"};
const Enum::YLeaf EthernetLoopbackEnum::internal {1, "internal"};
const Enum::YLeaf EthernetLoopbackEnum::line {2, "line"};

const Enum::YLeaf EthernetSpeedEnum::Y_10 {10, "10"};
const Enum::YLeaf EthernetSpeedEnum::Y_100 {100, "100"};
const Enum::YLeaf EthernetSpeedEnum::Y_1000 {1000, "1000"};

const Enum::YLeaf EthernetFlowCtrlEnum::ingress {0, "ingress"};
const Enum::YLeaf EthernetFlowCtrlEnum::egress {1, "egress"};
const Enum::YLeaf EthernetFlowCtrlEnum::bidirectional {2, "bidirectional"};

const Enum::YLeaf EthernetFecEnum::none {0, "none"};
const Enum::YLeaf EthernetFecEnum::standard {1, "standard"};


}
}

