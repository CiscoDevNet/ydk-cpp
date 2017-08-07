
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "IEEE8021_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace IEEE8021_TC_MIB {

const Enum::YLeaf Ieee8021Bridgeporttype::none {1, "none"};
const Enum::YLeaf Ieee8021Bridgeporttype::customerVlanPort {2, "customerVlanPort"};
const Enum::YLeaf Ieee8021Bridgeporttype::providerNetworkPort {3, "providerNetworkPort"};
const Enum::YLeaf Ieee8021Bridgeporttype::customerNetworkPort {4, "customerNetworkPort"};
const Enum::YLeaf Ieee8021Bridgeporttype::customerEdgePort {5, "customerEdgePort"};
const Enum::YLeaf Ieee8021Bridgeporttype::customerBackbonePort {6, "customerBackbonePort"};
const Enum::YLeaf Ieee8021Bridgeporttype::virtualInstancePort {7, "virtualInstancePort"};
const Enum::YLeaf Ieee8021Bridgeporttype::dBridgePort {8, "dBridgePort"};

const Enum::YLeaf Ieee8021Portacceptableframetypes::admitAll {1, "admitAll"};
const Enum::YLeaf Ieee8021Portacceptableframetypes::admitUntaggedAndPriority {2, "admitUntaggedAndPriority"};
const Enum::YLeaf Ieee8021Portacceptableframetypes::admitTagged {3, "admitTagged"};

const Enum::YLeaf Ieee8021Serviceselectortype::vlanId {1, "vlanId"};
const Enum::YLeaf Ieee8021Serviceselectortype::isid {2, "isid"};

const Enum::YLeaf Ieee8021Prioritycodepoint::codePoint8p0d {1, "codePoint8p0d"};
const Enum::YLeaf Ieee8021Prioritycodepoint::codePoint7p1d {2, "codePoint7p1d"};
const Enum::YLeaf Ieee8021Prioritycodepoint::codePoint6p2d {3, "codePoint6p2d"};
const Enum::YLeaf Ieee8021Prioritycodepoint::codePoint5p3d {4, "codePoint5p3d"};


}
}

