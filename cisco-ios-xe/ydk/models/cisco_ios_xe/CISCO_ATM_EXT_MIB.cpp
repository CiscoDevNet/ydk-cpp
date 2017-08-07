
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_ATM_EXT_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_ATM_EXT_MIB {

const Enum::YLeaf Oamccvcstate::verified {1, "verified"};
const Enum::YLeaf Oamccvcstate::aisrdi {2, "aisrdi"};
const Enum::YLeaf Oamccvcstate::notManaged {3, "notManaged"};

const Enum::YLeaf Oamccstatus::ready {1, "ready"};
const Enum::YLeaf Oamccstatus::waitActiveResponse {2, "waitActiveResponse"};
const Enum::YLeaf Oamccstatus::waitActiveConfirm {3, "waitActiveConfirm"};
const Enum::YLeaf Oamccstatus::active {4, "active"};
const Enum::YLeaf Oamccstatus::waitDeactiveConfirm {5, "waitDeactiveConfirm"};


}
}

