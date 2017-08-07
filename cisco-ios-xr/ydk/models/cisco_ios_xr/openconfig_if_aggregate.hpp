#ifndef _OPENCONFIG_IF_AGGREGATE_
#define _OPENCONFIG_IF_AGGREGATE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace openconfig_if_aggregate {

class AggregationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LACP;
        static const ydk::Enum::YLeaf STATIC;

};


}
}

#endif /* _OPENCONFIG_IF_AGGREGATE_ */

