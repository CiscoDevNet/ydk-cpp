#ifndef _CISCO_IOS_XR_IPV6_MA_CFG_
#define _CISCO_IOS_XR_IPV6_MA_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ma_cfg {


class Ipv6SelfPingEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};

class Ipv6QppbEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf ip_precedence;
        static const Enum::YLeaf qos_group;
        static const Enum::YLeaf both;

};

class Ipv6DefaultPingEnum : public Enum
{
    public:
        static const Enum::YLeaf disabled;
        static const Enum::YLeaf enabled;

};

class Ipv6ReachableEnum : public Enum
{
    public:
        static const Enum::YLeaf any;
        static const Enum::YLeaf received;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_MA_CFG_ */

