
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_SESSION_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_SESSION_TC_MIB {

const Enum::YLeaf Subsessionredundancymode::none {1, "none"};
const Enum::YLeaf Subsessionredundancymode::other {2, "other"};
const Enum::YLeaf Subsessionredundancymode::active {3, "active"};
const Enum::YLeaf Subsessionredundancymode::standby {4, "standby"};

const Enum::YLeaf Subsessiontype::all {1, "all"};
const Enum::YLeaf Subsessiontype::other {2, "other"};
const Enum::YLeaf Subsessiontype::pppSubscriber {3, "pppSubscriber"};
const Enum::YLeaf Subsessiontype::pppoeSubscriber {4, "pppoeSubscriber"};
const Enum::YLeaf Subsessiontype::l2tpSubscriber {5, "l2tpSubscriber"};
const Enum::YLeaf Subsessiontype::l2fSubscriber {6, "l2fSubscriber"};
const Enum::YLeaf Subsessiontype::ipInterfaceSubscriber {7, "ipInterfaceSubscriber"};
const Enum::YLeaf Subsessiontype::ipPktSubscriber {8, "ipPktSubscriber"};
const Enum::YLeaf Subsessiontype::ipDhcpv4Subscriber {9, "ipDhcpv4Subscriber"};
const Enum::YLeaf Subsessiontype::ipRadiusSubscriber {10, "ipRadiusSubscriber"};
const Enum::YLeaf Subsessiontype::l2MacSubscriber {11, "l2MacSubscriber"};
const Enum::YLeaf Subsessiontype::l2Dhcpv4Subscriber {12, "l2Dhcpv4Subscriber"};
const Enum::YLeaf Subsessiontype::l2RadiusSubscriber {13, "l2RadiusSubscriber"};

const Enum::YLeaf Subsessionstate::other {1, "other"};
const Enum::YLeaf Subsessionstate::pending {2, "pending"};
const Enum::YLeaf Subsessionstate::up {3, "up"};


}
}

