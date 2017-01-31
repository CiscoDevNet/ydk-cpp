#ifndef _CISCO_IOS_XR_INFRA_SLA_DATATYPES_
#define _CISCO_IOS_XR_INFRA_SLA_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_sla_datatypes {


class SlaBurstIntervalUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf once;
        static const Enum::YLeaf milliseconds;
        static const Enum::YLeaf seconds;
        static const Enum::YLeaf minutes;
        static const Enum::YLeaf hours;

};

class SlaOnDemandStartTimeTypesEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf now;
        static const Enum::YLeaf absolute;
        static const Enum::YLeaf relative;

};

class SlaPacketIntervalUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf once;
        static const Enum::YLeaf milliseconds;
        static const Enum::YLeaf seconds;
        static const Enum::YLeaf minutes;
        static const Enum::YLeaf hours;

};

class SlaOnDemandProbeDurationUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf seconds;
        static const Enum::YLeaf minutes;
        static const Enum::YLeaf hours;

};

class SlaOnDemandStartMonthEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf january;
        static const Enum::YLeaf february;
        static const Enum::YLeaf march;
        static const Enum::YLeaf april;
        static const Enum::YLeaf may;
        static const Enum::YLeaf june;
        static const Enum::YLeaf july;
        static const Enum::YLeaf august;
        static const Enum::YLeaf september;
        static const Enum::YLeaf october;
        static const Enum::YLeaf november;
        static const Enum::YLeaf december;

};

class SlaOnDemandRepeatIntervalUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf seconds;
        static const Enum::YLeaf minutes;
        static const Enum::YLeaf hours;

};

class SlaBucketsSizeUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf buckets_per_probe;
        static const Enum::YLeaf probes_per_bucket;

};

class SlaProbeIntervalUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf minutes;
        static const Enum::YLeaf hours;
        static const Enum::YLeaf day;
        static const Enum::YLeaf week;

};

class SlaProbeDurationUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf seconds;
        static const Enum::YLeaf minutes;
        static const Enum::YLeaf hours;
        static const Enum::YLeaf day;
        static const Enum::YLeaf week;

};

class SlaProbeIntervalDayEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf monday;
        static const Enum::YLeaf tuesday;
        static const Enum::YLeaf wednesday;
        static const Enum::YLeaf thursday;
        static const Enum::YLeaf friday;
        static const Enum::YLeaf saturday;
        static const Enum::YLeaf sunday;

};

class SlaOnDemandStartTimeRelativeUnitsEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf seconds;
        static const Enum::YLeaf minutes;
        static const Enum::YLeaf hours;

};

class SlaStatisticTypeEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf round_trip_delay;
        static const Enum::YLeaf one_way_delay_sd;
        static const Enum::YLeaf one_way_delay_ds;
        static const Enum::YLeaf round_trip_jitter;
        static const Enum::YLeaf one_way_jitter_sd;
        static const Enum::YLeaf one_way_jitter_ds;
        static const Enum::YLeaf one_way_loss_sd;
        static const Enum::YLeaf one_way_loss_ds;

};

class SlaPaddingPatternEnum : public Enum
{
    public:
        static const Enum::YLeaf hex;
        static const Enum::YLeaf pseudo_random;

};

class SlaSendEnum : public Enum
{
    public:
        static const Enum::YLeaf packet;
        static const Enum::YLeaf burst;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_DATATYPES_ */

