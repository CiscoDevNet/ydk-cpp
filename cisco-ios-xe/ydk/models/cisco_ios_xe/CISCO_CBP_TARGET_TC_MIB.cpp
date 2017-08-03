
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CBP_TARGET_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_TC_MIB {

const Enum::YLeaf Ccbpttargetdirection::undirected {1, "undirected"};
const Enum::YLeaf Ccbpttargetdirection::input {2, "input"};
const Enum::YLeaf Ccbpttargetdirection::output {3, "output"};
const Enum::YLeaf Ccbpttargetdirection::inOut {4, "inOut"};

const Enum::YLeaf Ccbpttargettype::genIf {1, "genIf"};
const Enum::YLeaf Ccbpttargettype::atmPvc {2, "atmPvc"};
const Enum::YLeaf Ccbpttargettype::frDlci {3, "frDlci"};
const Enum::YLeaf Ccbpttargettype::entity_ {4, "entity"};
const Enum::YLeaf Ccbpttargettype::fwZone {5, "fwZone"};
const Enum::YLeaf Ccbpttargettype::fwZonePair {6, "fwZonePair"};
const Enum::YLeaf Ccbpttargettype::aaaSession {7, "aaaSession"};

const Enum::YLeaf Ccbptpolicysourcetype::ciscoCbQos {1, "ciscoCbQos"};
const Enum::YLeaf Ccbptpolicysourcetype::ciscoCbpBase {2, "ciscoCbpBase"};


}
}

