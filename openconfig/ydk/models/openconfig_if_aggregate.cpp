
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_if_aggregate.hpp"

namespace ydk {
namespace openconfig_if_aggregate {


const Enum::YLeaf AggregationTypeEnum::LACP {0, "LACP"};
const Enum::YLeaf AggregationTypeEnum::STATIC {1, "STATIC"};

const Enum::YLeaf LacpTimeoutTypeEnum::LONG {0, "LONG"};
const Enum::YLeaf LacpTimeoutTypeEnum::SHORT {1, "SHORT"};

const Enum::YLeaf LacpPeriodTypeEnum::FAST {0, "FAST"};
const Enum::YLeaf LacpPeriodTypeEnum::SLOW {1, "SLOW"};

const Enum::YLeaf LacpActivityTypeEnum::ACTIVE {0, "ACTIVE"};
const Enum::YLeaf LacpActivityTypeEnum::PASSIVE {1, "PASSIVE"};

const Enum::YLeaf LacpSynchronizationTypeEnum::IN_SYNC {0, "IN_SYNC"};
const Enum::YLeaf LacpSynchronizationTypeEnum::OUT_SYNC {1, "OUT_SYNC"};


}
}

