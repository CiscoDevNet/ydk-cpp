#ifndef _CISCO_IOS_XR_IPV6_MA_CFG_
#define _CISCO_IOS_XR_IPV6_MA_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv6_ma_cfg {

class Ipv6SelfPing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class Ipv6Qppb : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf ip_precedence;
        static const ydk::Enum::YLeaf qos_group;
        static const ydk::Enum::YLeaf both;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "ip-precedence") return 1;
            if (name == "qos-group") return 2;
            if (name == "both") return 3;
            return -1;
        }
};

class Ipv6DefaultPing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

        static int get_enum_value(const std::string & name) {
            if (name == "disabled") return 0;
            if (name == "enabled") return 1;
            return -1;
        }
};

class Ipv6Reachable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf received;

        static int get_enum_value(const std::string & name) {
            if (name == "any") return 0;
            if (name == "received") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV6_MA_CFG_ */

