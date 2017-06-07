#ifndef _COMMON_MPLS_TYPES_
#define _COMMON_MPLS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace common_mpls_types {

class IetfMplsLabelEnum : public Enum
{
    public:
        static const Enum::YLeaf v4_explicit_null;
        static const Enum::YLeaf v6_explicit_null;
        static const Enum::YLeaf implicit_null;

};


}
}

#endif /* _COMMON_MPLS_TYPES_ */

