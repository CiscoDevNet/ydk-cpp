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
        static const Enum::YLeaf rx_only;
        static const Enum::YLeaf tx_only;

};

class SpanMirrorIntervalEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_512;
        static const Enum::YLeaf Y_1k;
        static const Enum::YLeaf Y_2k;
        static const Enum::YLeaf Y_4k;
        static const Enum::YLeaf Y_8k;
        static const Enum::YLeaf Y_16k;

};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_SUBSCRIBER_CFG_ */

