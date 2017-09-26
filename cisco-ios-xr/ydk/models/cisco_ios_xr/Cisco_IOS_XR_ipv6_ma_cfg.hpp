#ifndef _CISCO_IOS_XR_IPV6_MA_CFG_
#define _CISCO_IOS_XR_IPV6_MA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ma_cfg {

class Ipv6Qppb : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ip_precedence;
        static const ydk::Enum::YLeaf qos_group;
        static const ydk::Enum::YLeaf both;

};

class Ipv6SelfPing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class Ipv6Reachable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf received;

};

class Ipv6DefaultPing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};


}
}

#endif /* _CISCO_IOS_XR_IPV6_MA_CFG_ */

