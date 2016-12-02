#ifndef _OPENCONFIG_IF_AGGREGATE_
#define _OPENCONFIG_IF_AGGREGATE_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_if_aggregate {


class AggregationTypeEnum : public Enum
{
    public:
        static const Enum::Value LACP;
        static const Enum::Value STATIC;

};

class LacpTimeoutTypeEnum : public Enum
{
    public:
        static const Enum::Value LONG;
        static const Enum::Value SHORT;

};

class LacpPeriodTypeEnum : public Enum
{
    public:
        static const Enum::Value FAST;
        static const Enum::Value SLOW;

};

class LacpActivityTypeEnum : public Enum
{
    public:
        static const Enum::Value ACTIVE;
        static const Enum::Value PASSIVE;

};

class LacpSynchronizationTypeEnum : public Enum
{
    public:
        static const Enum::Value IN_SYNC;
        static const Enum::Value OUT_SYNC;

};


}
}

#endif /* _OPENCONFIG_IF_AGGREGATE_ */

