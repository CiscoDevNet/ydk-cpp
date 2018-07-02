#ifndef _CISCO_IOS_XR_INFRA_SLA_DATATYPES_
#define _CISCO_IOS_XR_INFRA_SLA_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_sla_datatypes {

class SlaBurstIntervalUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf once;
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

};

class SlaActionTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;

};

class SlaPacketIntervalUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf once;
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

};

class SlaProbeIntervalUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;
        static const ydk::Enum::YLeaf day;
        static const ydk::Enum::YLeaf week;

};

class SlaOnDemandProbeDurationUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

};

class SlaOnDemandStartTimeTypesEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf now;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf relative;

};

class SlaOnDemandStartMonthEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf january;
        static const ydk::Enum::YLeaf february;
        static const ydk::Enum::YLeaf march;
        static const ydk::Enum::YLeaf april;
        static const ydk::Enum::YLeaf may;
        static const ydk::Enum::YLeaf june;
        static const ydk::Enum::YLeaf july;
        static const ydk::Enum::YLeaf august;
        static const ydk::Enum::YLeaf september;
        static const ydk::Enum::YLeaf october;
        static const ydk::Enum::YLeaf november;
        static const ydk::Enum::YLeaf december;

};

class SlaOnDemandRepeatIntervalUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

};

class SlaBucketsSizeUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf buckets_per_probe;
        static const ydk::Enum::YLeaf probes_per_bucket;

};

class SlaThresholdConditionEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;
        static const ydk::Enum::YLeaf mean;
        static const ydk::Enum::YLeaf sample_count;

};

class SlaProbeDurationUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;
        static const ydk::Enum::YLeaf day;
        static const ydk::Enum::YLeaf week;

};

class SlaThresholdTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stateless;

};

class SlaProbeIntervalDayEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf monday;
        static const ydk::Enum::YLeaf tuesday;
        static const ydk::Enum::YLeaf wednesday;
        static const ydk::Enum::YLeaf thursday;
        static const ydk::Enum::YLeaf friday;
        static const ydk::Enum::YLeaf saturday;
        static const ydk::Enum::YLeaf sunday;

};

class SlaOnDemandStartTimeRelativeUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

};

class SlaStatisticTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf round_trip_delay;
        static const ydk::Enum::YLeaf one_way_delay_sd;
        static const ydk::Enum::YLeaf one_way_delay_ds;
        static const ydk::Enum::YLeaf round_trip_jitter;
        static const ydk::Enum::YLeaf one_way_jitter_sd;
        static const ydk::Enum::YLeaf one_way_jitter_ds;
        static const ydk::Enum::YLeaf one_way_loss_sd;
        static const ydk::Enum::YLeaf one_way_loss_ds;

};

class SlaPaddingPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hex;
        static const ydk::Enum::YLeaf pseudo_random;

};

class SlaSend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf burst;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_DATATYPES_ */

