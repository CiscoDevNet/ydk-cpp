#ifndef _CISCO_IOS_XR_IPV4_IO_CFG_
#define _CISCO_IOS_XR_IPV4_IO_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_io_cfg {


class Ipv4DefaultPingEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};

class Ipv4SelfPingEnum : public Enum
{
    public:
        static const Enum::Value disabled;
        static const Enum::Value enabled;

};

class Ipv4ReachableEnum : public Enum
{
    public:
        static const Enum::Value any;
        static const Enum::Value received;

};

class Ipv4InterfaceQppbEnum : public Enum
{
    public:
        static const Enum::Value ip_precedence;
        static const Enum::Value qos_group;
        static const Enum::Value both;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IO_CFG_ */

