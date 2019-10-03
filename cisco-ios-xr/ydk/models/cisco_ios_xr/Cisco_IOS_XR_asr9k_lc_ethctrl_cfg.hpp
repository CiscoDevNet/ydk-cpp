#ifndef _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_
#define _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_asr9k_lc_ethctrl_cfg {

class PermitPluggable : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 1;
            return -1;
        }
};

class EtherCtrlTransportMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf wan;
        static const ydk::Enum::YLeaf otnopu1e;
        static const ydk::Enum::YLeaf otnopu2e;

        static int get_enum_value(const std::string & name) {
            if (name == "wan") return 1;
            if (name == "otnopu1e") return 2;
            if (name == "otnopu2e") return 3;
            return -1;
        }
};

class PermitPluggablePid : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ASR9K_LC_ETHCTRL_CFG_ */

