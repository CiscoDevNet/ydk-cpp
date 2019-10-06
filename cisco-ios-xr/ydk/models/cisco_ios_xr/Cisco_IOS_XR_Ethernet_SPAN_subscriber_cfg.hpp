#ifndef _CISCO_IOS_XR_ETHERNET_SPAN_SUBSCRIBER_CFG_
#define _CISCO_IOS_XR_ETHERNET_SPAN_SUBSCRIBER_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_Ethernet_SPAN_subscriber_cfg {

class SpanTrafficDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rx_only;
        static const ydk::Enum::YLeaf tx_only;

        static int get_enum_value(const std::string & name) {
            if (name == "rx-only") return 1;
            if (name == "tx-only") return 2;
            return -1;
        }
};

class SpanMirrorInterval : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_512;
        static const ydk::Enum::YLeaf Y_1k;
        static const ydk::Enum::YLeaf Y_2k;
        static const ydk::Enum::YLeaf Y_4k;
        static const ydk::Enum::YLeaf Y_8k;
        static const ydk::Enum::YLeaf Y_16k;

        static int get_enum_value(const std::string & name) {
            if (name == "512") return 1;
            if (name == "1k") return 2;
            if (name == "2k") return 3;
            if (name == "4k") return 4;
            if (name == "8k") return 5;
            if (name == "16k") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ETHERNET_SPAN_SUBSCRIBER_CFG_ */

