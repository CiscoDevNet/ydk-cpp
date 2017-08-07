
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "SNMPv2_TC.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace SNMPv2_TC {

const Enum::YLeaf Truthvalue::true_ {1, "true"};
const Enum::YLeaf Truthvalue::false_ {2, "false"};

const Enum::YLeaf Storagetype::other {1, "other"};
const Enum::YLeaf Storagetype::volatile_ {2, "volatile"};
const Enum::YLeaf Storagetype::nonVolatile {3, "nonVolatile"};
const Enum::YLeaf Storagetype::permanent {4, "permanent"};
const Enum::YLeaf Storagetype::readOnly {5, "readOnly"};

const Enum::YLeaf Rowstatus::active {1, "active"};
const Enum::YLeaf Rowstatus::notInService {2, "notInService"};
const Enum::YLeaf Rowstatus::notReady {3, "notReady"};
const Enum::YLeaf Rowstatus::createAndGo {4, "createAndGo"};
const Enum::YLeaf Rowstatus::createAndWait {5, "createAndWait"};
const Enum::YLeaf Rowstatus::destroy {6, "destroy"};


}
}

