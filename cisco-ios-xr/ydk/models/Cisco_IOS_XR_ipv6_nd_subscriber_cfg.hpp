#ifndef _CISCO_IOS_XR_IPV6_ND_SUBSCRIBER_CFG_
#define _CISCO_IOS_XR_IPV6_ND_SUBSCRIBER_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_nd_subscriber_cfg {


class Ipv6NdHopLimitEnum : public Enum
{
    public:
        static const Enum::YLeaf unspecified;

};

class Ipv6NdRouterPrefTemplateEnum : public Enum
{
    public:
        static const Enum::YLeaf high;
        static const Enum::YLeaf medium;
        static const Enum::YLeaf low;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_ND_SUBSCRIBER_CFG_ */

