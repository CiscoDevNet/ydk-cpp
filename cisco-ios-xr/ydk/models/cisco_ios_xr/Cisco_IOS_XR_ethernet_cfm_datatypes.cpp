
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ethernet_cfm_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ethernet_cfm_datatypes {

const Enum::YLeaf BandwidthNotificationState::ok {1, "ok"};
const Enum::YLeaf BandwidthNotificationState::degraded {2, "degraded"};

const Enum::YLeaf CfmMepDir::up {0, "up"};
const Enum::YLeaf CfmMepDir::down {1, "down"};

const Enum::YLeaf CfmCcmInterval::Y_3__DOT__3ms {1, "3.3ms"};
const Enum::YLeaf CfmCcmInterval::Y_10ms {2, "10ms"};
const Enum::YLeaf CfmCcmInterval::Y_100ms {3, "100ms"};
const Enum::YLeaf CfmCcmInterval::Y_1s {4, "1s"};
const Enum::YLeaf CfmCcmInterval::Y_10s {5, "10s"};
const Enum::YLeaf CfmCcmInterval::Y_1m {6, "1m"};
const Enum::YLeaf CfmCcmInterval::Y_10m {7, "10m"};

const Enum::YLeaf CfmAisInterval::Y_1s {4, "1s"};
const Enum::YLeaf CfmAisInterval::Y_1m {6, "1m"};


}
}

