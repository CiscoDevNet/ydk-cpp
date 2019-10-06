#ifndef _CISCO_IOS_XR_DRIVERS_ICPE_ETHERNET_CFG_
#define _CISCO_IOS_XR_DRIVERS_ICPE_ETHERNET_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_icpe_ethernet_cfg {

class ExtendedEthernetLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

        static int get_enum_value(const std::string & name) {
            if (name == "internal") return 1;
            if (name == "line") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_ICPE_ETHERNET_CFG_ */

