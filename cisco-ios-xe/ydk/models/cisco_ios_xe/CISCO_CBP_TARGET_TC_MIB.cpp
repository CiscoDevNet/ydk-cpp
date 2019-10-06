
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CBP_TARGET_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_TC_MIB {

const Enum::YLeaf CcbptTargetDirection::undirected {1, "undirected"};
const Enum::YLeaf CcbptTargetDirection::input {2, "input"};
const Enum::YLeaf CcbptTargetDirection::output {3, "output"};
const Enum::YLeaf CcbptTargetDirection::inOut {4, "inOut"};

const Enum::YLeaf CcbptPolicySourceType::ciscoCbQos {1, "ciscoCbQos"};
const Enum::YLeaf CcbptPolicySourceType::ciscoCbpBase {2, "ciscoCbpBase"};

const Enum::YLeaf CcbptTargetType::genIf {1, "genIf"};
const Enum::YLeaf CcbptTargetType::atmPvc {2, "atmPvc"};
const Enum::YLeaf CcbptTargetType::frDlci {3, "frDlci"};
const Enum::YLeaf CcbptTargetType::entity_ {4, "entity"};
const Enum::YLeaf CcbptTargetType::fwZone {5, "fwZone"};
const Enum::YLeaf CcbptTargetType::fwZonePair {6, "fwZonePair"};
const Enum::YLeaf CcbptTargetType::aaaSession {7, "aaaSession"};


}
}

