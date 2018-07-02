#ifndef _CISCO_IOS_XR_IPV4_IO_CFG_
#define _CISCO_IOS_XR_IPV4_IO_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_io_cfg {

class Ipv4DefaultPing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class Ipv4SelfPing : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;

};

class DhcpClientOptionCode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_60;

};

class Ipv4Reachable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf any;
        static const ydk::Enum::YLeaf received;

};

class Ipv4InterfaceQppb : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ip_precedence;
        static const ydk::Enum::YLeaf qos_group;
        static const ydk::Enum::YLeaf both;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_IO_CFG_ */

