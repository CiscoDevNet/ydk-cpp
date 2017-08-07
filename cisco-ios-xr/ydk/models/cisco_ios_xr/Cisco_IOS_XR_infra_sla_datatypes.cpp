
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_sla_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_sla_datatypes {

const Enum::YLeaf SlaProbeIntervalUnitsEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaProbeIntervalUnitsEnum::hours {5, "hours"};
const Enum::YLeaf SlaProbeIntervalUnitsEnum::day {6, "day"};
const Enum::YLeaf SlaProbeIntervalUnitsEnum::week {7, "week"};

const Enum::YLeaf SlaSend::packet {0, "packet"};
const Enum::YLeaf SlaSend::burst {1, "burst"};

const Enum::YLeaf SlaOnDemandProbeDurationUnitsEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaOnDemandProbeDurationUnitsEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaOnDemandProbeDurationUnitsEnum::hours {5, "hours"};

const Enum::YLeaf SlaOnDemandStartTimeTypesEnum::now {0, "now"};
const Enum::YLeaf SlaOnDemandStartTimeTypesEnum::absolute {1, "absolute"};
const Enum::YLeaf SlaOnDemandStartTimeTypesEnum::relative {2, "relative"};

const Enum::YLeaf SlaPaddingPattern::hex {0, "hex"};
const Enum::YLeaf SlaPaddingPattern::pseudo_random {1, "pseudo-random"};

const Enum::YLeaf SlaBurstIntervalUnitsEnum::once {1, "once"};
const Enum::YLeaf SlaBurstIntervalUnitsEnum::milliseconds {2, "milliseconds"};
const Enum::YLeaf SlaBurstIntervalUnitsEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaBurstIntervalUnitsEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaBurstIntervalUnitsEnum::hours {5, "hours"};

const Enum::YLeaf SlaOnDemandRepeatIntervalUnitsEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaOnDemandRepeatIntervalUnitsEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaOnDemandRepeatIntervalUnitsEnum::hours {5, "hours"};

const Enum::YLeaf SlaProbeIntervalDayEnum::monday {1, "monday"};
const Enum::YLeaf SlaProbeIntervalDayEnum::tuesday {2, "tuesday"};
const Enum::YLeaf SlaProbeIntervalDayEnum::wednesday {3, "wednesday"};
const Enum::YLeaf SlaProbeIntervalDayEnum::thursday {4, "thursday"};
const Enum::YLeaf SlaProbeIntervalDayEnum::friday {5, "friday"};
const Enum::YLeaf SlaProbeIntervalDayEnum::saturday {6, "saturday"};
const Enum::YLeaf SlaProbeIntervalDayEnum::sunday {7, "sunday"};

const Enum::YLeaf SlaOnDemandStartTimeRelativeUnitsEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaOnDemandStartTimeRelativeUnitsEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaOnDemandStartTimeRelativeUnitsEnum::hours {5, "hours"};

const Enum::YLeaf SlaStatisticTypeEnum::round_trip_delay {1, "round-trip-delay"};
const Enum::YLeaf SlaStatisticTypeEnum::one_way_delay_sd {2, "one-way-delay-sd"};
const Enum::YLeaf SlaStatisticTypeEnum::one_way_delay_ds {3, "one-way-delay-ds"};
const Enum::YLeaf SlaStatisticTypeEnum::round_trip_jitter {4, "round-trip-jitter"};
const Enum::YLeaf SlaStatisticTypeEnum::one_way_jitter_sd {5, "one-way-jitter-sd"};
const Enum::YLeaf SlaStatisticTypeEnum::one_way_jitter_ds {6, "one-way-jitter-ds"};
const Enum::YLeaf SlaStatisticTypeEnum::one_way_loss_sd {7, "one-way-loss-sd"};
const Enum::YLeaf SlaStatisticTypeEnum::one_way_loss_ds {8, "one-way-loss-ds"};

const Enum::YLeaf SlaProbeDurationUnitsEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaProbeDurationUnitsEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaProbeDurationUnitsEnum::hours {5, "hours"};
const Enum::YLeaf SlaProbeDurationUnitsEnum::day {6, "day"};
const Enum::YLeaf SlaProbeDurationUnitsEnum::week {7, "week"};

const Enum::YLeaf SlaBucketsSizeUnitsEnum::buckets_per_probe {0, "buckets-per-probe"};
const Enum::YLeaf SlaBucketsSizeUnitsEnum::probes_per_bucket {1, "probes-per-bucket"};

const Enum::YLeaf SlaPacketIntervalUnitsEnum::once {1, "once"};
const Enum::YLeaf SlaPacketIntervalUnitsEnum::milliseconds {2, "milliseconds"};
const Enum::YLeaf SlaPacketIntervalUnitsEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaPacketIntervalUnitsEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaPacketIntervalUnitsEnum::hours {5, "hours"};

const Enum::YLeaf SlaOnDemandStartMonthEnum::january {0, "january"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::february {1, "february"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::march {2, "march"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::april {3, "april"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::may {4, "may"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::june {5, "june"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::july {6, "july"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::august {7, "august"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::september {8, "september"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::october {9, "october"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::november {10, "november"};
const Enum::YLeaf SlaOnDemandStartMonthEnum::december {11, "december"};


}
}

