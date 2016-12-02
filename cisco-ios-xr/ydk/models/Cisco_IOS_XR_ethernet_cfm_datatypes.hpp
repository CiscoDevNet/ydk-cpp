#ifndef _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_
#define _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ethernet_cfm_datatypes {


class BandwidthNotificationStateEnum : public Enum
{
    public:
        static const Enum::Value ok;
        static const Enum::Value degraded;

};

class CfmMepDirEnum : public Enum
{
    public:
        static const Enum::Value up;
        static const Enum::Value down;

};

class CfmCcmIntervalEnum : public Enum
{
    public:
        static const Enum::Value Y_3__DOT__3ms;
        static const Enum::Value Y_10ms;
        static const Enum::Value Y_100ms;
        static const Enum::Value Y_1s;
        static const Enum::Value Y_10s;
        static const Enum::Value Y_1m;
        static const Enum::Value Y_10m;

};

class CfmAisIntervalEnum : public Enum
{
    public:
        static const Enum::Value Y_1s;
        static const Enum::Value Y_1m;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_CFM_DATATYPES_ */

