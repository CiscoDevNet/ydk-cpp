
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_sla_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_sla_datatypes {


const Enum::Value SlaBurstIntervalUnitsEnumEnum::once {1, "once"};
const Enum::Value SlaBurstIntervalUnitsEnumEnum::milliseconds {2, "milliseconds"};
const Enum::Value SlaBurstIntervalUnitsEnumEnum::seconds {3, "seconds"};
const Enum::Value SlaBurstIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::Value SlaBurstIntervalUnitsEnumEnum::hours {5, "hours"};

const Enum::Value SlaOnDemandStartTimeTypesEnumEnum::now {0, "now"};
const Enum::Value SlaOnDemandStartTimeTypesEnumEnum::absolute {1, "absolute"};
const Enum::Value SlaOnDemandStartTimeTypesEnumEnum::relative {2, "relative"};

const Enum::Value SlaPacketIntervalUnitsEnumEnum::once {1, "once"};
const Enum::Value SlaPacketIntervalUnitsEnumEnum::milliseconds {2, "milliseconds"};
const Enum::Value SlaPacketIntervalUnitsEnumEnum::seconds {3, "seconds"};
const Enum::Value SlaPacketIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::Value SlaPacketIntervalUnitsEnumEnum::hours {5, "hours"};

const Enum::Value SlaOnDemandProbeDurationUnitsEnumEnum::seconds {3, "seconds"};
const Enum::Value SlaOnDemandProbeDurationUnitsEnumEnum::minutes {4, "minutes"};
const Enum::Value SlaOnDemandProbeDurationUnitsEnumEnum::hours {5, "hours"};

const Enum::Value SlaOnDemandStartMonthEnumEnum::january {0, "january"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::february {1, "february"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::march {2, "march"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::april {3, "april"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::may {4, "may"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::june {5, "june"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::july {6, "july"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::august {7, "august"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::september {8, "september"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::october {9, "october"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::november {10, "november"};
const Enum::Value SlaOnDemandStartMonthEnumEnum::december {11, "december"};

const Enum::Value SlaOnDemandRepeatIntervalUnitsEnumEnum::seconds {3, "seconds"};
const Enum::Value SlaOnDemandRepeatIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::Value SlaOnDemandRepeatIntervalUnitsEnumEnum::hours {5, "hours"};

const Enum::Value SlaBucketsSizeUnitsEnumEnum::buckets_per_probe {0, "buckets-per-probe"};
const Enum::Value SlaBucketsSizeUnitsEnumEnum::probes_per_bucket {1, "probes-per-bucket"};

const Enum::Value SlaProbeIntervalUnitsEnumEnum::minutes {4, "minutes"};
const Enum::Value SlaProbeIntervalUnitsEnumEnum::hours {5, "hours"};
const Enum::Value SlaProbeIntervalUnitsEnumEnum::day {6, "day"};
const Enum::Value SlaProbeIntervalUnitsEnumEnum::week {7, "week"};

const Enum::Value SlaProbeDurationUnitsEnumEnum::seconds {3, "seconds"};
const Enum::Value SlaProbeDurationUnitsEnumEnum::minutes {4, "minutes"};
const Enum::Value SlaProbeDurationUnitsEnumEnum::hours {5, "hours"};
const Enum::Value SlaProbeDurationUnitsEnumEnum::day {6, "day"};
const Enum::Value SlaProbeDurationUnitsEnumEnum::week {7, "week"};

const Enum::Value SlaProbeIntervalDayEnumEnum::monday {1, "monday"};
const Enum::Value SlaProbeIntervalDayEnumEnum::tuesday {2, "tuesday"};
const Enum::Value SlaProbeIntervalDayEnumEnum::wednesday {3, "wednesday"};
const Enum::Value SlaProbeIntervalDayEnumEnum::thursday {4, "thursday"};
const Enum::Value SlaProbeIntervalDayEnumEnum::friday {5, "friday"};
const Enum::Value SlaProbeIntervalDayEnumEnum::saturday {6, "saturday"};
const Enum::Value SlaProbeIntervalDayEnumEnum::sunday {7, "sunday"};

const Enum::Value SlaOnDemandStartTimeRelativeUnitsEnumEnum::seconds {3, "seconds"};
const Enum::Value SlaOnDemandStartTimeRelativeUnitsEnumEnum::minutes {4, "minutes"};
const Enum::Value SlaOnDemandStartTimeRelativeUnitsEnumEnum::hours {5, "hours"};

const Enum::Value SlaStatisticTypeEnumEnum::round_trip_delay {1, "round-trip-delay"};
const Enum::Value SlaStatisticTypeEnumEnum::one_way_delay_sd {2, "one-way-delay-sd"};
const Enum::Value SlaStatisticTypeEnumEnum::one_way_delay_ds {3, "one-way-delay-ds"};
const Enum::Value SlaStatisticTypeEnumEnum::round_trip_jitter {4, "round-trip-jitter"};
const Enum::Value SlaStatisticTypeEnumEnum::one_way_jitter_sd {5, "one-way-jitter-sd"};
const Enum::Value SlaStatisticTypeEnumEnum::one_way_jitter_ds {6, "one-way-jitter-ds"};
const Enum::Value SlaStatisticTypeEnumEnum::one_way_loss_sd {7, "one-way-loss-sd"};
const Enum::Value SlaStatisticTypeEnumEnum::one_way_loss_ds {8, "one-way-loss-ds"};

const Enum::Value SlaPaddingPatternEnum::hex {0, "hex"};
const Enum::Value SlaPaddingPatternEnum::pseudo_random {1, "pseudo-random"};

const Enum::Value SlaSendEnum::packet {0, "packet"};
const Enum::Value SlaSendEnum::burst {1, "burst"};


}
}

