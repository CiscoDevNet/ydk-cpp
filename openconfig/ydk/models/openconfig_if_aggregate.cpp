
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_if_aggregate.hpp"

namespace ydk {
namespace openconfig_if_aggregate {


const Enum::Value AggregationTypeEnum::LACP {0, "LACP"};
const Enum::Value AggregationTypeEnum::STATIC {1, "STATIC"};

const Enum::Value LacpTimeoutTypeEnum::LONG {0, "LONG"};
const Enum::Value LacpTimeoutTypeEnum::SHORT {1, "SHORT"};

const Enum::Value LacpPeriodTypeEnum::FAST {0, "FAST"};
const Enum::Value LacpPeriodTypeEnum::SLOW {1, "SLOW"};

const Enum::Value LacpActivityTypeEnum::ACTIVE {0, "ACTIVE"};
const Enum::Value LacpActivityTypeEnum::PASSIVE {1, "PASSIVE"};

const Enum::Value LacpSynchronizationTypeEnum::IN_SYNC {0, "IN_SYNC"};
const Enum::Value LacpSynchronizationTypeEnum::OUT_SYNC {1, "OUT_SYNC"};


}
}

