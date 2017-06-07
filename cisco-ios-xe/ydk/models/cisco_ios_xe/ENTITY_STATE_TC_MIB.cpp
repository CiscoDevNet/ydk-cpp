
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ENTITY_STATE_TC_MIB.hpp"

namespace ydk {
namespace ENTITY_STATE_TC_MIB {

const Enum::YLeaf EntitystandbystatusEnum::unknown {1, "unknown"};
const Enum::YLeaf EntitystandbystatusEnum::hotStandby {2, "hotStandby"};
const Enum::YLeaf EntitystandbystatusEnum::coldStandby {3, "coldStandby"};
const Enum::YLeaf EntitystandbystatusEnum::providingService {4, "providingService"};

const Enum::YLeaf EntityoperstateEnum::unknown {1, "unknown"};
const Enum::YLeaf EntityoperstateEnum::disabled {2, "disabled"};
const Enum::YLeaf EntityoperstateEnum::enabled {3, "enabled"};
const Enum::YLeaf EntityoperstateEnum::testing {4, "testing"};

const Enum::YLeaf EntityadminstateEnum::unknown {1, "unknown"};
const Enum::YLeaf EntityadminstateEnum::locked {2, "locked"};
const Enum::YLeaf EntityadminstateEnum::shuttingDown {3, "shuttingDown"};
const Enum::YLeaf EntityadminstateEnum::unlocked {4, "unlocked"};

const Enum::YLeaf EntityusagestateEnum::unknown {1, "unknown"};
const Enum::YLeaf EntityusagestateEnum::idle {2, "idle"};
const Enum::YLeaf EntityusagestateEnum::active {3, "active"};
const Enum::YLeaf EntityusagestateEnum::busy {4, "busy"};


}
}

