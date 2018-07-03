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

};


}
}

#endif /* _OPENCONFIG_AFT_TYPES_ */

