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

        static int get_enum_value(const std::string & name) {
            if (name == "once") return 1;
            if (name == "milliseconds") return 2;
            if (name == "seconds") return 3;
            if (name == "minutes") return 4;
            if (name == "hours") return 5;
            return -1;
        }
};

class SlaActionTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf log;

        static int get_enum_value(const std::string & name) {
            if (name == "log") return 0;
            return -1;
        }
};

class SlaPacketIntervalUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf once;
        static const ydk::Enum::YLeaf milliseconds;
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

        static int get_enum_value(const std::string & name) {
            if (name == "once") return 1;
            if (name == "milliseconds") return 2;
            if (name == "seconds") return 3;
            if (name == "minutes") return 4;
            if (name == "hours") return 5;
            return -1;
        }
};

class SlaProbeIntervalUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;
        static const ydk::Enum::YLeaf day;
        static const ydk::Enum::YLeaf week;

        static int get_enum_value(const std::string & name) {
            if (name == "minutes") return 4;
            if (name == "hours") return 5;
            if (name == "day") return 6;
            if (name == "week") return 7;
            return -1;
        }
};

class SlaOnDemandProbeDurationUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

        static int get_enum_value(const std::string & name) {
            if (name == "seconds") return 3;
            if (name == "minutes") return 4;
            if (name == "hours") return 5;
            return -1;
        }
};

class SlaOnDemandStartTimeTypesEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf now;
        static const ydk::Enum::YLeaf absolute;
        static const ydk::Enum::YLeaf relative;

        static int get_enum_value(const std::string & name) {
            if (name == "now") return 0;
            if (name == "absolute") return 1;
            if (name == "relative") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "january") return 0;
            if (name == "february") return 1;
            if (name == "march") return 2;
            if (name == "april") return 3;
            if (name == "may") return 4;
            if (name == "june") return 5;
            if (name == "july") return 6;
            if (name == "august") return 7;
            if (name == "september") return 8;
            if (name == "october") return 9;
            if (name == "november") return 10;
            if (name == "december") return 11;
            return -1;
        }
};

class SlaOnDemandRepeatIntervalUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

        static int get_enum_value(const std::string & name) {
            if (name == "seconds") return 3;
            if (name == "minutes") return 4;
            if (name == "hours") return 5;
            return -1;
        }
};

class SlaBucketsSizeUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf buckets_per_probe;
        static const ydk::Enum::YLeaf probes_per_bucket;

        static int get_enum_value(const std::string & name) {
            if (name == "buckets-per-probe") return 0;
            if (name == "probes-per-bucket") return 1;
            return -1;
        }
};

class SlaThresholdConditionEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max;
        static const ydk::Enum::YLeaf mean;
        static const ydk::Enum::YLeaf sample_count;

        static int get_enum_value(const std::string & name) {
            if (name == "max") return 0;
            if (name == "mean") return 1;
            if (name == "sample-count") return 2;
            return -1;
        }
};

class SlaProbeDurationUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;
        static const ydk::Enum::YLeaf day;
        static const ydk::Enum::YLeaf week;

        static int get_enum_value(const std::string & name) {
            if (name == "seconds") return 3;
            if (name == "minutes") return 4;
            if (name == "hours") return 5;
            if (name == "day") return 6;
            if (name == "week") return 7;
            return -1;
        }
};

class SlaThresholdTypeEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf stateless;

        static int get_enum_value(const std::string & name) {
            if (name == "stateless") return 1;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "monday") return 1;
            if (name == "tuesday") return 2;
            if (name == "wednesday") return 3;
            if (name == "thursday") return 4;
            if (name == "friday") return 5;
            if (name == "saturday") return 6;
            if (name == "sunday") return 7;
            return -1;
        }
};

class SlaOnDemandStartTimeRelativeUnitsEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf seconds;
        static const ydk::Enum::YLeaf minutes;
        static const ydk::Enum::YLeaf hours;

        static int get_enum_value(const std::string & name) {
            if (name == "seconds") return 3;
            if (name == "minutes") return 4;
            if (name == "hours") return 5;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "round-trip-delay") return 1;
            if (name == "one-way-delay-sd") return 2;
            if (name == "one-way-delay-ds") return 3;
            if (name == "round-trip-jitter") return 4;
            if (name == "one-way-jitter-sd") return 5;
            if (name == "one-way-jitter-ds") return 6;
            if (name == "one-way-loss-sd") return 7;
            if (name == "one-way-loss-ds") return 8;
            return -1;
        }
};

class SlaPaddingPattern : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf hex;
        static const ydk::Enum::YLeaf pseudo_random;

        static int get_enum_value(const std::string & name) {
            if (name == "hex") return 0;
            if (name == "pseudo-random") return 1;
            return -1;
        }
};

class SlaSend : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf packet;
        static const ydk::Enum::YLeaf burst;

        static int get_enum_value(const std::string & name) {
            if (name == "packet") return 0;
            if (name == "burst") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_INFRA_SLA_DATATYPES_ */

