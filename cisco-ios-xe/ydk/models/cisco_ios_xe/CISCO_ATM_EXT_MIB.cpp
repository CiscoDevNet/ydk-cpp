
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ATM_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ATM_EXT_MIB {

const Enum::YLeaf OamCCStatus::ready {1, "ready"};
const Enum::YLeaf OamCCStatus::waitActiveResponse {2, "waitActiveResponse"};
const Enum::YLeaf OamCCStatus::waitActiveConfirm {3, "waitActiveConfirm"};
const Enum::YLeaf OamCCStatus::active {4, "active"};
const Enum::YLeaf OamCCStatus::waitDeactiveConfirm {5, "waitDeactiveConfirm"};

const Enum::YLeaf OamCCVcState::verified {1, "verified"};
const Enum::YLeaf OamCCVcState::aisrdi {2, "aisrdi"};
const Enum::YLeaf OamCCVcState::notManaged {3, "notManaged"};


}
}

