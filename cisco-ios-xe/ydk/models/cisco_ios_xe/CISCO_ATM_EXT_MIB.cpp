
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ATM_EXT_MIB.hpp"

namespace ydk {
namespace CISCO_ATM_EXT_MIB {

const Enum::YLeaf OamccvcstateEnum::verified {1, "verified"};
const Enum::YLeaf OamccvcstateEnum::aisrdi {2, "aisrdi"};
const Enum::YLeaf OamccvcstateEnum::notManaged {3, "notManaged"};

const Enum::YLeaf OamccstatusEnum::ready {1, "ready"};
const Enum::YLeaf OamccstatusEnum::waitActiveResponse {2, "waitActiveResponse"};
const Enum::YLeaf OamccstatusEnum::waitActiveConfirm {3, "waitActiveConfirm"};
const Enum::YLeaf OamccstatusEnum::active {4, "active"};
const Enum::YLeaf OamccstatusEnum::waitDeactiveConfirm {5, "waitDeactiveConfirm"};


}
}

