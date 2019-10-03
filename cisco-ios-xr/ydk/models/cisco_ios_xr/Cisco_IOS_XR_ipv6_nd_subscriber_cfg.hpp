#ifndef _CISCO_IOS_XR_IPV6_ND_SUBSCRIBER_CFG_
#define _CISCO_IOS_XR_IPV6_ND_SUBSCRIBER_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_nd_subscriber_cfg {

class Ipv6NdRouterPrefTemplate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf high;
        static const ydk::Enum::YLeaf medium;
        static const ydk::Enum::YLeaf low;

        static int get_enum_value(const std::string & name) {
            if (name == "high") return 1;
            if (name == "medium") return 2;
            if (name == "low") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_SUBSCRIBER_CFG_ */

