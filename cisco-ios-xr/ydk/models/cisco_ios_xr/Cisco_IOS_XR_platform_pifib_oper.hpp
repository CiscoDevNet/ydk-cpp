#ifndef _CISCO_IOS_XR_PLATFORM_PIFIB_OPER_
#define _CISCO_IOS_XR_PLATFORM_PIFIB_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_platform_pifib_oper {

class UsageAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PLATFORM_PIFIB_OPER_ */

