
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IEEE8021_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IEEE8021_TC_MIB {

const Enum::YLeaf IEEE8021PriorityCodePoint::codePoint8p0d {1, "codePoint8p0d"};
const Enum::YLeaf IEEE8021PriorityCodePoint::codePoint7p1d {2, "codePoint7p1d"};
const Enum::YLeaf IEEE8021PriorityCodePoint::codePoint6p2d {3, "codePoint6p2d"};
const Enum::YLeaf IEEE8021PriorityCodePoint::codePoint5p3d {4, "codePoint5p3d"};

const Enum::YLeaf IEEE8021PortAcceptableFrameTypes::admitAll {1, "admitAll"};
const Enum::YLeaf IEEE8021PortAcceptableFrameTypes::admitUntaggedAndPriority {2, "admitUntaggedAndPriority"};
const Enum::YLeaf IEEE8021PortAcceptableFrameTypes::admitTagged {3, "admitTagged"};

const Enum::YLeaf IEEE8021ServiceSelectorType::vlanId {1, "vlanId"};
const Enum::YLeaf IEEE8021ServiceSelectorType::isid {2, "isid"};

const Enum::YLeaf IEEE8021BridgePortType::none {1, "none"};
const Enum::YLeaf IEEE8021BridgePortType::customerVlanPort {2, "customerVlanPort"};
const Enum::YLeaf IEEE8021BridgePortType::providerNetworkPort {3, "providerNetworkPort"};
const Enum::YLeaf IEEE8021BridgePortType::customerNetworkPort {4, "customerNetworkPort"};
const Enum::YLeaf IEEE8021BridgePortType::customerEdgePort {5, "customerEdgePort"};
const Enum::YLeaf IEEE8021BridgePortType::customerBackbonePort {6, "customerBackbonePort"};
const Enum::YLeaf IEEE8021BridgePortType::virtualInstancePort {7, "virtualInstancePort"};
const Enum::YLeaf IEEE8021BridgePortType::dBridgePort {8, "dBridgePort"};


}
}

