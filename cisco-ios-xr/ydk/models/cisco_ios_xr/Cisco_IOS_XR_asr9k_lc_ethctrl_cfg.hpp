#ifndef _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_
#define _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_asr9k_lc_ethctrl_cfg {

class PermitPluggableEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};

class EtherCtrlTransportModeEnum : public Enum
{
    public:
        static const Enum::YLeaf wan;
        static const Enum::YLeaf otnopu1e;
        static const Enum::YLeaf otnopu2e;

};

class PermitPluggablePidEnum : public Enum
{
    public:
        static const Enum::YLeaf all;

};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_ */

