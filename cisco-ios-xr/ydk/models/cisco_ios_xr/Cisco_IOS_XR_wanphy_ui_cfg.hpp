#ifndef _CISCO_IOS_XR_WANPHY_UI_CFG_
#define _CISCO_IOS_XR_WANPHY_UI_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_wanphy_ui_cfg {

class WanphyLanMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            return -1;
        }
};

class WanphyWanMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf on;

        static int get_enum_value(const std::string & name) {
            if (name == "on") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_WANPHY_UI_CFG_ */

