
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_SESSION_TC_MIB.hpp"

namespace ydk {
namespace CISCO_SUBSCRIBER_SESSION_TC_MIB {

const Enum::YLeaf SubsessiontypeEnum::all {1, "all"};
const Enum::YLeaf SubsessiontypeEnum::other {2, "other"};
const Enum::YLeaf SubsessiontypeEnum::pppSubscriber {3, "pppSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::pppoeSubscriber {4, "pppoeSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::l2tpSubscriber {5, "l2tpSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::l2fSubscriber {6, "l2fSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::ipInterfaceSubscriber {7, "ipInterfaceSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::ipPktSubscriber {8, "ipPktSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::ipDhcpv4Subscriber {9, "ipDhcpv4Subscriber"};
const Enum::YLeaf SubsessiontypeEnum::ipRadiusSubscriber {10, "ipRadiusSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::l2MacSubscriber {11, "l2MacSubscriber"};
const Enum::YLeaf SubsessiontypeEnum::l2Dhcpv4Subscriber {12, "l2Dhcpv4Subscriber"};
const Enum::YLeaf SubsessiontypeEnum::l2RadiusSubscriber {13, "l2RadiusSubscriber"};

const Enum::YLeaf SubsessionredundancymodeEnum::none {1, "none"};
const Enum::YLeaf SubsessionredundancymodeEnum::other {2, "other"};
const Enum::YLeaf SubsessionredundancymodeEnum::active {3, "active"};
const Enum::YLeaf SubsessionredundancymodeEnum::standby {4, "standby"};

const Enum::YLeaf SubsessionstateEnum::other {1, "other"};
const Enum::YLeaf SubsessionstateEnum::pending {2, "pending"};
const Enum::YLeaf SubsessionstateEnum::up {3, "up"};


}
}

