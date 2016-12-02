#ifndef _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_
#define _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_drivers_media_eth_cfg {


class EthernetIpgEnum : public Enum
{
    public:
        static const Enum::Value non_standard;

};

class EthernetPfcEnum : public Enum
{
    public:
        static const Enum::Value on;

};

class EthernetAutoNegotiationEnum : public Enum
{
    public:
        static const Enum::Value true_;
        static const Enum::Value override;

};

class EthernetDuplexEnum : public Enum
{
    public:
        static const Enum::Value full;
        static const Enum::Value half;

};

class EthernetLoopbackEnum : public Enum
{
    public:
        static const Enum::Value external;
        static const Enum::Value internal;
        static const Enum::Value line;

};

class EthernetSpeedEnum : public Enum
{
    public:
        static const Enum::Value Y_10;
        static const Enum::Value Y_100;
        static const Enum::Value Y_1000;

};

class EthernetFlowCtrlEnum : public Enum
{
    public:
        static const Enum::Value ingress;
        static const Enum::Value egress;
        static const Enum::Value bidirectional;

};

class EthernetFecEnum : public Enum
{
    public:
        static const Enum::Value none;
        static const Enum::Value standard;

};


}
}

#endif /* _CISCO_IOS_XR_DRIVERS_MEDIA_ETH_CFG_ */

