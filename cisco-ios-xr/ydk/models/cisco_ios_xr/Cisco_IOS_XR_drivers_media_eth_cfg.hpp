#ifndef _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_
#define _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_drivers_media_eth_cfg {

class EthernetIpgEnum : public Enum
{
    public:
        static const Enum::YLeaf non_standard;

};

class EthernetPfcEnum : public Enum
{
    public:
        static const Enum::YLeaf on;

};

class EthernetAutoNegotiationEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;
        static const Enum::YLeaf override;

};

class EthernetDuplexEnum : public Enum
{
    public:
        static const Enum::YLeaf full;
        static const Enum::YLeaf half;

};

class EthernetLoopbackEnum : public Enum
{
    public:
        static const Enum::YLeaf external;
        static const Enum::YLeaf internal;
        static const Enum::YLeaf line;

};

class EthernetSpeedEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_10;
        static const Enum::YLeaf Y_100;
        static const Enum::YLeaf Y_1000;

};

class EthernetFlowCtrlEnum : public Enum
{
    public:
        static const Enum::YLeaf ingress;
        static const Enum::YLeaf egress;
        static const Enum::YLeaf bidirectional;

};

class EthernetFecEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf standard;

};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_ */

