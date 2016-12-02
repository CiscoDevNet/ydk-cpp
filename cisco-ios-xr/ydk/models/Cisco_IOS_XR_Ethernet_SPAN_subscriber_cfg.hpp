#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_SUBSCRIBER_CFG_
#define _CISCO_IOS_XR_ETHERNET_SPAN_SUBSCRIBER_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_Ethernet_SPAN_subscriber_cfg {


class SpanTrafficDirectionEnum : public Enum
{
    public:
        static const Enum::Value rx_only;
        static const Enum::Value tx_only;

};

class SpanMirrorIntervalEnum : public Enum
{
    public:
        static const Enum::Value Y_512;
        static const Enum::Value Y_1k;
        static const Enum::Value Y_2k;
        static const Enum::Value Y_4k;
        static const Enum::Value Y_8k;
        static const Enum::Value Y_16k;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_SUBSCRIBER_CFG_ */

