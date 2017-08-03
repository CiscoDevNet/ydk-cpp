
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_STATE_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ENTITY_STATE_TC_MIB {

const Enum::YLeaf Entityusagestate::unknown {1, "unknown"};
const Enum::YLeaf Entityusagestate::idle {2, "idle"};
const Enum::YLeaf Entityusagestate::active {3, "active"};
const Enum::YLeaf Entityusagestate::busy {4, "busy"};

const Enum::YLeaf Entityoperstate::unknown {1, "unknown"};
const Enum::YLeaf Entityoperstate::disabled {2, "disabled"};
const Enum::YLeaf Entityoperstate::enabled {3, "enabled"};
const Enum::YLeaf Entityoperstate::testing {4, "testing"};

const Enum::YLeaf Entitystandbystatus::unknown {1, "unknown"};
const Enum::YLeaf Entitystandbystatus::hotStandby {2, "hotStandby"};
const Enum::YLeaf Entitystandbystatus::coldStandby {3, "coldStandby"};
const Enum::YLeaf Entitystandbystatus::providingService {4, "providingService"};

const Enum::YLeaf Entityadminstate::unknown {1, "unknown"};
const Enum::YLeaf Entityadminstate::locked {2, "locked"};
const Enum::YLeaf Entityadminstate::shuttingDown {3, "shuttingDown"};
const Enum::YLeaf Entityadminstate::unlocked {4, "unlocked"};


}
}

