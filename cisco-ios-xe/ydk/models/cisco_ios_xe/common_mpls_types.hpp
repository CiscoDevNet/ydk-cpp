#ifndef _COMMON_MPLS_TYPES_
#define _COMMON_MPLS_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace common_mpls_types {

class IetfMplsLabel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf v4_explicit_null;
        static const ydk::Enum::YLeaf v6_explicit_null;
        static const ydk::Enum::YLeaf implicit_null;

};


}
}

#endif /* _COMMON_MPLS_TYPES_ */

