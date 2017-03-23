#ifndef _CISCO_IOS_XR_AAA_AAACORE_CFG_
#define _CISCO_IOS_XR_AAA_AAACORE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_aaa_aaacore_cfg {

class NasPortValueEnum : public Enum
{
    public:
        static const Enum::YLeaf async;
        static const Enum::YLeaf sync;
        static const Enum::YLeaf isdn;
        static const Enum::YLeaf isdn_async_v120;
        static const Enum::YLeaf isdn_async_v110;
        static const Enum::YLeaf virtual_;
        static const Enum::YLeaf isdn_async_piafs;
        static const Enum::YLeaf x75;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf pppoa;
        static const Enum::YLeaf pppoeoa;
        static const Enum::YLeaf pppoeoe;
        static const Enum::YLeaf pppoeovlan;
        static const Enum::YLeaf pppoeoqinq;
        static const Enum::YLeaf virtual_pppoeoe;
        static const Enum::YLeaf virtual_pppoeovlan;
        static const Enum::YLeaf virtual_pppoeoqinaq;
        static const Enum::YLeaf ipsec;
        static const Enum::YLeaf ipoeoe;
        static const Enum::YLeaf ipoeovlan;
        static const Enum::YLeaf ipoeoqinq;
        static const Enum::YLeaf virtual_ipoeoe;
        static const Enum::YLeaf virtual_ipoeovlan;
        static const Enum::YLeaf virtual_ipoeoqinq;

};

class AaaServiceAccountingEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf extended;
        static const Enum::YLeaf brief;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_AAACORE_CFG_ */

