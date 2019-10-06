#ifndef _CISCO_IOS_XR_PPP_MA_GBL_CFG_
#define _CISCO_IOS_XR_PPP_MA_GBL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ppp_ma_gbl_cfg {

class PppAuthenticationMethodGbl : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf pap;
        static const ydk::Enum::YLeaf chap;
        static const ydk::Enum::YLeaf ms_chap;

        static int get_enum_value(const std::string & name) {
            if (name == "pap") return 1;
            if (name == "chap") return 2;
            if (name == "ms-chap") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_PPP_MA_GBL_CFG_ */

