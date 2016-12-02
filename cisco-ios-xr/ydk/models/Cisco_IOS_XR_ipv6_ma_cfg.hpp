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
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};

class Ipv6QppbEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value ip_precedence;
        static const Enum::Value qos_group;
        static const Enum::Value both;

};

class Ipv6DefaultPingEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};

class Ipv6ReachableEnum : public Enum
{
    public:
        static const Enum::Value any;
        static const Enum::Value received;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_MA_CFG_ */

