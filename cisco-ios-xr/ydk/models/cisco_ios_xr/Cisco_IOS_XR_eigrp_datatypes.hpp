#ifndef _CISCO_IOS_XR_EIGRP_DATATYPES_
#define _CISCO_IOS_XR_EIGRP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_eigrp_datatypes {

class EigrpAf : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_EIGRP_DATATYPES_ */

