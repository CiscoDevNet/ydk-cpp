#ifndef _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_
#define _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lc_ethctrl_cfg {

class EtherCtrlTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wan;
        static const ydk::Enum::YLeaf otnopu1e;
        static const ydk::Enum::YLeaf otnopu2e;

};

class PermitPluggablePid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

};

class PermitPluggable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_ */

