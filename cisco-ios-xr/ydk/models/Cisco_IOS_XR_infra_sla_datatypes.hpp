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
        static const Enum::Value once;
        static const Enum::Value milliseconds;
        static const Enum::Value seconds;
        static const Enum::Value minutes;
        static const Enum::Value hours;

};

class SlaOnDemandStartTimeTypesEnumEnum : public Enum
{
    public:
        static const Enum::Value now;
        static const Enum::Value absolute;
        static const Enum::Value relative;

};

class SlaPacketIntervalUnitsEnumEnum : public Enum
{
    public:
        static const Enum::Value once;
        static const Enum::Value milliseconds;
        static const Enum::Value seconds;
        static const Enum::Value minutes;
        static const Enum::Value hours;

};

class SlaOnDemandProbeDurationUnitsEnumEnum : public Enum
{
    public:
        static const Enum::Value seconds;
        static const Enum::Value minutes;
        static const Enum::Value hours;

};

class SlaOnDemandStartMonthEnumEnum : public Enum
{
    public:
        static const Enum::Value january;
        static const Enum::Value february;
        static const Enum::Value march;
        static const Enum::Value april;
        static const Enum::Value may;
        static const Enum::Value june;
        static const Enum::Value july;
        static const Enum::Value august;
        static const Enum::Value september;
        static const Enum::Value october;
        static const Enum::Value november;
        static const Enum::Value december;

};

class SlaOnDemandRepeatIntervalUnitsEnumEnum : public Enum
{
    public:
        static const Enum::Value seconds;
        static const Enum::Value minutes;
        static const Enum::Value hours;

};

class SlaBucketsSizeUnitsEnumEnum : public Enum
{
    public:
        static const Enum::Value buckets_per_probe;
        static const Enum::Value probes_per_bucket;

};

class SlaProbeIntervalUnitsEnumEnum : public Enum
{
    public:
        static const Enum::Value minutes;
        static const Enum::Value hours;
        static const Enum::Value day;
        static const Enum::Value week;

};

class SlaProbeDurationUnitsEnumEnum : public Enum
{
    public:
        static const Enum::Value seconds;
        static const Enum::Value minutes;
        static const Enum::Value hours;
        static const Enum::Value day;
        static const Enum::Value week;

};

class SlaProbeIntervalDayEnumEnum : public Enum
{
    public:
        static const Enum::Value monday;
        static const Enum::Value tuesday;
        static const Enum::Value wednesday;
        static const Enum::Value thursday;
        static const Enum::Value friday;
        static const Enum::Value saturday;
        static const Enum::Value sunday;

};

class SlaOnDemandStartTimeRelativeUnitsEnumEnum : public Enum
{
    public:
        static const Enum::Value seconds;
        static const Enum::Value minutes;
        static const Enum::Value hours;

};

class SlaStatisticTypeEnumEnum : public Enum
{
    public:
        static const Enum::Value round_trip_delay;
        static const Enum::Value one_way_delay_sd;
        static const Enum::Value one_way_delay_ds;
        static const Enum::Value round_trip_jitter;
        static const Enum::Value one_way_jitter_sd;
        static const Enum::Value one_way_jitter_ds;
        static const Enum::Value one_way_loss_sd;
        static const Enum::Value one_way_loss_ds;

};

class SlaPaddingPatternEnum : public Enum
{
    public:
        static const Enum::Value hex;
        static const Enum::Value pseudo_random;

};

class SlaSendEnum : public Enum
{
    public:
        static const Enum::Value packet;
        static const Enum::Value burst;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_DATATYPES_ */

