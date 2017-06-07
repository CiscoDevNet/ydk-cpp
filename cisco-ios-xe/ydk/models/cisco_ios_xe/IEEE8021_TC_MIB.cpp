
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IEEE8021_TC_MIB.hpp"

namespace ydk {
namespace IEEE8021_TC_MIB {

const Enum::YLeaf Ieee8021PrioritycodepointEnum::codePoint8p0d {1, "codePoint8p0d"};
const Enum::YLeaf Ieee8021PrioritycodepointEnum::codePoint7p1d {2, "codePoint7p1d"};
const Enum::YLeaf Ieee8021PrioritycodepointEnum::codePoint6p2d {3, "codePoint6p2d"};
const Enum::YLeaf Ieee8021PrioritycodepointEnum::codePoint5p3d {4, "codePoint5p3d"};

const Enum::YLeaf Ieee8021ServiceselectortypeEnum::vlanId {1, "vlanId"};
const Enum::YLeaf Ieee8021ServiceselectortypeEnum::isid {2, "isid"};

const Enum::YLeaf Ieee8021PortacceptableframetypesEnum::admitAll {1, "admitAll"};
const Enum::YLeaf Ieee8021PortacceptableframetypesEnum::admitUntaggedAndPriority {2, "admitUntaggedAndPriority"};
const Enum::YLeaf Ieee8021PortacceptableframetypesEnum::admitTagged {3, "admitTagged"};

const Enum::YLeaf Ieee8021BridgeporttypeEnum::none {1, "none"};
const Enum::YLeaf Ieee8021BridgeporttypeEnum::customerVlanPort {2, "customerVlanPort"};
const Enum::YLeaf Ieee8021BridgeporttypeEnum::providerNetworkPort {3, "providerNetworkPort"};
const Enum::YLeaf Ieee8021BridgeporttypeEnum::customerNetworkPort {4, "customerNetworkPort"};
const Enum::YLeaf Ieee8021BridgeporttypeEnum::customerEdgePort {5, "customerEdgePort"};
const Enum::YLeaf Ieee8021BridgeporttypeEnum::customerBackbonePort {6, "customerBackbonePort"};
const Enum::YLeaf Ieee8021BridgeporttypeEnum::virtualInstancePort {7, "virtualInstancePort"};
const Enum::YLeaf Ieee8021BridgeporttypeEnum::dBridgePort {8, "dBridgePort"};


}
}

