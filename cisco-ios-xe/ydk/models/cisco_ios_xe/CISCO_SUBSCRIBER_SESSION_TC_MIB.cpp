
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_SESSION_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_SESSION_TC_MIB {

const Enum::YLeaf SubSessionType::all {1, "all"};
const Enum::YLeaf SubSessionType::other {2, "other"};
const Enum::YLeaf SubSessionType::pppSubscriber {3, "pppSubscriber"};
const Enum::YLeaf SubSessionType::pppoeSubscriber {4, "pppoeSubscriber"};
const Enum::YLeaf SubSessionType::l2tpSubscriber {5, "l2tpSubscriber"};
const Enum::YLeaf SubSessionType::l2fSubscriber {6, "l2fSubscriber"};
const Enum::YLeaf SubSessionType::ipInterfaceSubscriber {7, "ipInterfaceSubscriber"};
const Enum::YLeaf SubSessionType::ipPktSubscriber {8, "ipPktSubscriber"};
const Enum::YLeaf SubSessionType::ipDhcpv4Subscriber {9, "ipDhcpv4Subscriber"};
const Enum::YLeaf SubSessionType::ipRadiusSubscriber {10, "ipRadiusSubscriber"};
const Enum::YLeaf SubSessionType::l2MacSubscriber {11, "l2MacSubscriber"};
const Enum::YLeaf SubSessionType::l2Dhcpv4Subscriber {12, "l2Dhcpv4Subscriber"};
const Enum::YLeaf SubSessionType::l2RadiusSubscriber {13, "l2RadiusSubscriber"};

const Enum::YLeaf SubSessionRedundancyMode::none {1, "none"};
const Enum::YLeaf SubSessionRedundancyMode::other {2, "other"};
const Enum::YLeaf SubSessionRedundancyMode::active {3, "active"};
const Enum::YLeaf SubSessionRedundancyMode::standby {4, "standby"};

const Enum::YLeaf SubSessionState::other {1, "other"};
const Enum::YLeaf SubSessionState::pending {2, "pending"};
const Enum::YLeaf SubSessionState::up {3, "up"};


}
}

