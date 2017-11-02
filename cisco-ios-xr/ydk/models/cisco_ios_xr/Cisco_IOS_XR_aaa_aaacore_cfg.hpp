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

};

class AaaServiceAccounting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf extended;
        static const ydk::Enum::YLeaf brief;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_AAACORE_CFG_ */

