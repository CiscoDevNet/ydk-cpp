
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMPv2_TC.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace SNMPv2_TC {

const Enum::YLeaf TruthValue::true_ {1, "true"};
const Enum::YLeaf TruthValue::false_ {2, "false"};

const Enum::YLeaf RowStatus::active {1, "active"};
const Enum::YLeaf RowStatus::notInService {2, "notInService"};
const Enum::YLeaf RowStatus::notReady {3, "notReady"};
const Enum::YLeaf RowStatus::createAndGo {4, "createAndGo"};
const Enum::YLeaf RowStatus::createAndWait {5, "createAndWait"};
const Enum::YLeaf RowStatus::destroy {6, "destroy"};

const Enum::YLeaf StorageType::other {1, "other"};
const Enum::YLeaf StorageType::volatile_ {2, "volatile"};
const Enum::YLeaf StorageType::nonVolatile {3, "nonVolatile"};
const Enum::YLeaf StorageType::permanent {4, "permanent"};
const Enum::YLeaf StorageType::readOnly {5, "readOnly"};


}
}

