#ifndef _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_
#define _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_drivers_media_eth_cfg {

class EthernetIpg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf non_standard;

};

class EthernetPfc : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;

};

class EthernetAutoNegotiation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf override;

};

class EthernetDuplex : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf full;
        static const ydk::Enum::YLeaf half;

};

class EthernetLoopback : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf external;
        static const ydk::Enum::YLeaf internal;
        static const ydk::Enum::YLeaf line;

};

class EthernetSpeed : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_10;
        static const ydk::Enum::YLeaf Y_100;
        static const ydk::Enum::YLeaf Y_1000;

};

class EthernetFlowCtrl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ingress;
        static const ydk::Enum::YLeaf egress;
        static const ydk::Enum::YLeaf bidirectional;

};

class EthernetFec : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf standard;

};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_ */

