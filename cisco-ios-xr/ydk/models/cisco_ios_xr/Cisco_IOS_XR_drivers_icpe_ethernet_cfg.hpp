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

};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_ICPE_ETHERNET_CFG_ */

