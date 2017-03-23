
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_sla_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_sla_datatypes {

const Enum::YLeaf SlaBurstIntervalUnitsEnumEnum::once {1, "once"};
const Enum::YLeaf SlaBurstIntervalUnitsEnumEnum::milliseconds {2, "milliseconds"};
const Enum::YLeaf SlaBurstIntervalUnitsEnumEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaBurstIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaBurstIntervalUnitsEnumEnum::hours {5, "hours"};

const Enum::YLeaf SlaOnDemandStartTimeTypesEnumEnum::now {0, "now"};
const Enum::YLeaf SlaOnDemandStartTimeTypesEnumEnum::absolute {1, "absolute"};
const Enum::YLeaf SlaOnDemandStartTimeTypesEnumEnum::relative {2, "relative"};

const Enum::YLeaf SlaPacketIntervalUnitsEnumEnum::once {1, "once"};
const Enum::YLeaf SlaPacketIntervalUnitsEnumEnum::milliseconds {2, "milliseconds"};
const Enum::YLeaf SlaPacketIntervalUnitsEnumEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaPacketIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaPacketIntervalUnitsEnumEnum::hours {5, "hours"};

const Enum::YLeaf SlaOnDemandProbeDurationUnitsEnumEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaOnDemandProbeDurationUnitsEnumEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaOnDemandProbeDurationUnitsEnumEnum::hours {5, "hours"};

const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::january {0, "january"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::february {1, "february"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::march {2, "march"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::april {3, "april"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::may {4, "may"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::june {5, "june"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::july {6, "july"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::august {7, "august"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::september {8, "september"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::october {9, "october"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::november {10, "november"};
const Enum::YLeaf SlaOnDemandStartMonthEnumEnum::december {11, "december"};

const Enum::YLeaf SlaOnDemandRepeatIntervalUnitsEnumEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaOnDemandRepeatIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaOnDemandRepeatIntervalUnitsEnumEnum::hours {5, "hours"};

const Enum::YLeaf SlaBucketsSizeUnitsEnumEnum::buckets_per_probe {0, "buckets-per-probe"};
const Enum::YLeaf SlaBucketsSizeUnitsEnumEnum::probes_per_bucket {1, "probes-per-bucket"};

const Enum::YLeaf SlaProbeIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaProbeIntervalUnitsEnumEnum::hours {5, "hours"};
const Enum::YLeaf SlaProbeIntervalUnitsEnumEnum::day {6, "day"};
const Enum::YLeaf SlaProbeIntervalUnitsEnumEnum::week {7, "week"};

const Enum::YLeaf SlaProbeDurationUnitsEnumEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaProbeDurationUnitsEnumEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaProbeDurationUnitsEnumEnum::hours {5, "hours"};
const Enum::YLeaf SlaProbeDurationUnitsEnumEnum::day {6, "day"};
const Enum::YLeaf SlaProbeDurationUnitsEnumEnum::week {7, "week"};

const Enum::YLeaf SlaProbeIntervalDayEnumEnum::monday {1, "monday"};
const Enum::YLeaf SlaProbeIntervalDayEnumEnum::tuesday {2, "tuesday"};
const Enum::YLeaf SlaProbeIntervalDayEnumEnum::wednesday {3, "wednesday"};
const Enum::YLeaf SlaProbeIntervalDayEnumEnum::thursday {4, "thursday"};
const Enum::YLeaf SlaProbeIntervalDayEnumEnum::friday {5, "friday"};
const Enum::YLeaf SlaProbeIntervalDayEnumEnum::saturday {6, "saturday"};
const Enum::YLeaf SlaProbeIntervalDayEnumEnum::sunday {7, "sunday"};

const Enum::YLeaf SlaOnDemandStartTimeRelativeUnitsEnumEnum::seconds {3, "seconds"};
const Enum::YLeaf SlaOnDemandStartTimeRelativeUnitsEnumEnum::minutes {4, "minutes"};
const Enum::YLeaf SlaOnDemandStartTimeRelativeUnitsEnumEnum::hours {5, "hours"};

const Enum::YLeaf SlaStatisticTypeEnumEnum::round_trip_delay {1, "round-trip-delay"};
const Enum::YLeaf SlaStatisticTypeEnumEnum::one_way_delay_sd {2, "one-way-delay-sd"};
const Enum::YLeaf SlaStatisticTypeEnumEnum::one_way_delay_ds {3, "one-way-delay-ds"};
const Enum::YLeaf SlaStatisticTypeEnumEnum::round_trip_jitter {4, "round-trip-jitter"};
const Enum::YLeaf SlaStatisticTypeEnumEnum::one_way_jitter_sd {5, "one-way-jitter-sd"};
const Enum::YLeaf SlaStatisticTypeEnumEnum::one_way_jitter_ds {6, "one-way-jitter-ds"};
const Enum::YLeaf SlaStatisticTypeEnumEnum::one_way_loss_sd {7, "one-way-loss-sd"};
const Enum::YLeaf SlaStatisticTypeEnumEnum::one_way_loss_ds {8, "one-way-loss-ds"};

const Enum::YLeaf SlaPaddingPatternEnum::hex {0, "hex"};
const Enum::YLeaf SlaPaddingPatternEnum::pseudo_random {1, "pseudo-random"};

const Enum::YLeaf SlaSendEnum::packet {0, "packet"};
const Enum::YLeaf SlaSendEnum::burst {1, "burst"};


}
}

