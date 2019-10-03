#ifndef _OPENCONFIG_AFT_TYPES_
#define _OPENCONFIG_AFT_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_aft_types {

class EncapsulationHeaderType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf GRE;
        static const ydk::Enum::YLeaf IPV4;
        static const ydk::Enum::YLeaf IPV6;
        static const ydk::Enum::YLeaf MPLS;

        static int get_enum_value(const std::string & name) {
            if (name == "GRE") return 0;
            if (name == "IPV4") return 1;
            if (name == "IPV6") return 2;
            if (name == "MPLS") return 3;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_AFT_TYPES_ */

