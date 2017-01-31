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
        static const Enum::YLeaf LACP;
        static const Enum::YLeaf STATIC;

};

class LacpTimeoutTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf LONG;
        static const Enum::YLeaf SHORT;

};

class LacpPeriodTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf FAST;
        static const Enum::YLeaf SLOW;

};

class LacpActivityTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf ACTIVE;
        static const Enum::YLeaf PASSIVE;

};

class LacpSynchronizationTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf IN_SYNC;
        static const Enum::YLeaf OUT_SYNC;

};


}
}

#endif /* _OPENCONFIG_IF_AGGREGATE_ */

