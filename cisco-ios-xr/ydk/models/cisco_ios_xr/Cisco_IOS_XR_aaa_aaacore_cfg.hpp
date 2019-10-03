#ifndef _CISCO_IOS_XR_AAA_AAACORE_CFG_
#define _CISCO_IOS_XR_AAA_AAACORE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_aaacore_cfg {

class NasPortValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf async;
        static const ydk::Enum::YLeaf sync;
        static const ydk::Enum::YLeaf isdn;
        static const ydk::Enum::YLeaf isdn_async_v120;
        static const ydk::Enum::YLeaf isdn_async_v110;
        static const ydk::Enum::YLeaf virtual_;
        static const ydk::Enum::YLeaf isdn_async_piafs;
        static const ydk::Enum::YLeaf x75;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf pppoa;
        static const ydk::Enum::YLeaf pppoeoa;
        static const ydk::Enum::YLeaf pppoeoe;
        static const ydk::Enum::YLeaf pppoeovlan;
        static const ydk::Enum::YLeaf pppoeoqinq;
        static const ydk::Enum::YLeaf virtual_pppoeoe;
        static const ydk::Enum::YLeaf virtual_pppoeovlan;
        static const ydk::Enum::YLeaf virtual_pppoeoqinaq;
        static const ydk::Enum::YLeaf ipsec;
        static const ydk::Enum::YLeaf ipoeoe;
        static const ydk::Enum::YLeaf ipoeovlan;
        static const ydk::Enum::YLeaf ipoeoqinq;
        static const ydk::Enum::YLeaf virtual_ipoeoe;
        static const ydk::Enum::YLeaf virtual_ipoeovlan;
        static const ydk::Enum::YLeaf virtual_ipoeoqinq;

        static int get_enum_value(const std::string & name) {
            if (name == "async") return 0;
            if (name == "sync") return 1;
            if (name == "isdn") return 2;
            if (name == "isdn-async-v120") return 3;
            if (name == "isdn-async-v110") return 4;
            if (name == "virtual") return 5;
            if (name == "isdn-async-piafs") return 6;
            if (name == "x75") return 9;
            if (name == "ethernet") return 15;
            if (name == "pppoa") return 30;
            if (name == "pppoeoa") return 31;
            if (name == "pppoeoe") return 32;
            if (name == "pppoeovlan") return 33;
            if (name == "pppoeoqinq") return 34;
            if (name == "virtual-pppoeoe") return 35;
            if (name == "virtual-pppoeovlan") return 36;
            if (name == "virtual-pppoeoqinaq") return 37;
            if (name == "ipsec") return 38;
            if (name == "ipoeoe") return 39;
            if (name == "ipoeovlan") return 40;
            if (name == "ipoeoqinq") return 41;
            if (name == "virtual-ipoeoe") return 42;
            if (name == "virtual-ipoeovlan") return 43;
            if (name == "virtual-ipoeoqinq") return 44;
            return -1;
        }
};

class AaaServiceAccounting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf brief;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "extended") return 1;
            if (name == "brief") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_AAA_AAACORE_CFG_ */

