
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMPv2_TC.hpp"

namespace ydk {
namespace SNMPv2_TC {

const Enum::YLeaf TruthvalueEnum::true_ {1, "true"};
const Enum::YLeaf TruthvalueEnum::false_ {2, "false"};

const Enum::YLeaf StoragetypeEnum::other {1, "other"};
const Enum::YLeaf StoragetypeEnum::volatile_ {2, "volatile"};
const Enum::YLeaf StoragetypeEnum::nonVolatile {3, "nonVolatile"};
const Enum::YLeaf StoragetypeEnum::permanent {4, "permanent"};
const Enum::YLeaf StoragetypeEnum::readOnly {5, "readOnly"};

const Enum::YLeaf RowstatusEnum::active {1, "active"};
const Enum::YLeaf RowstatusEnum::notInService {2, "notInService"};
const Enum::YLeaf RowstatusEnum::notReady {3, "notReady"};
const Enum::YLeaf RowstatusEnum::createAndGo {4, "createAndGo"};
const Enum::YLeaf RowstatusEnum::createAndWait {5, "createAndWait"};
const Enum::YLeaf RowstatusEnum::destroy {6, "destroy"};


}
}

