
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_STATE_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ENTITY_STATE_TC_MIB {

const Enum::YLeaf EntityAdminState::unknown {1, "unknown"};
const Enum::YLeaf EntityAdminState::locked {2, "locked"};
const Enum::YLeaf EntityAdminState::shuttingDown {3, "shuttingDown"};
const Enum::YLeaf EntityAdminState::unlocked {4, "unlocked"};

const Enum::YLeaf EntityOperState::unknown {1, "unknown"};
const Enum::YLeaf EntityOperState::disabled {2, "disabled"};
const Enum::YLeaf EntityOperState::enabled {3, "enabled"};
const Enum::YLeaf EntityOperState::testing {4, "testing"};

const Enum::YLeaf EntityUsageState::unknown {1, "unknown"};
const Enum::YLeaf EntityUsageState::idle {2, "idle"};
const Enum::YLeaf EntityUsageState::active {3, "active"};
const Enum::YLeaf EntityUsageState::busy {4, "busy"};

const Enum::YLeaf EntityStandbyStatus::unknown {1, "unknown"};
const Enum::YLeaf EntityStandbyStatus::hotStandby {2, "hotStandby"};
const Enum::YLeaf EntityStandbyStatus::coldStandby {3, "coldStandby"};
const Enum::YLeaf EntityStandbyStatus::providingService {4, "providingService"};


}
}

