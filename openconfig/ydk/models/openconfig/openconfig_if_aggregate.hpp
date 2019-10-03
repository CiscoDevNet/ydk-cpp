#ifndef _OPENCONFIG_IF_AGGREGATE_
#define _OPENCONFIG_IF_AGGREGATE_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_if_aggregate {

class AggregationType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf LACP;
        static const ydk::Enum::YLeaf STATIC;

        static int get_enum_value(const std::string & name) {
            if (name == "LACP") return 0;
            if (name == "STATIC") return 1;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_IF_AGGREGATE_ */

