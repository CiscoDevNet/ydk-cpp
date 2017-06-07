
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CBP_TARGET_TC_MIB.hpp"

namespace ydk {
namespace CISCO_CBP_TARGET_TC_MIB {

const Enum::YLeaf CcbpttargetdirectionEnum::undirected {1, "undirected"};
const Enum::YLeaf CcbpttargetdirectionEnum::input {2, "input"};
const Enum::YLeaf CcbpttargetdirectionEnum::output {3, "output"};
const Enum::YLeaf CcbpttargetdirectionEnum::inOut {4, "inOut"};

const Enum::YLeaf CcbptpolicysourcetypeEnum::ciscoCbQos {1, "ciscoCbQos"};
const Enum::YLeaf CcbptpolicysourcetypeEnum::ciscoCbpBase {2, "ciscoCbpBase"};

const Enum::YLeaf CcbpttargettypeEnum::genIf {1, "genIf"};
const Enum::YLeaf CcbpttargettypeEnum::atmPvc {2, "atmPvc"};
const Enum::YLeaf CcbpttargettypeEnum::frDlci {3, "frDlci"};
const Enum::YLeaf CcbpttargettypeEnum::entity_ {4, "entity"};
const Enum::YLeaf CcbpttargettypeEnum::fwZone {5, "fwZone"};
const Enum::YLeaf CcbpttargettypeEnum::fwZonePair {6, "fwZonePair"};
const Enum::YLeaf CcbpttargettypeEnum::aaaSession {7, "aaaSession"};


}
}

