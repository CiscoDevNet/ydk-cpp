#ifndef _CISCO_IOS_XR_PPP_MA_GBL_CFG_
#define _CISCO_IOS_XR_PPP_MA_GBL_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_ppp_ma_gbl_cfg {

class PppAuthenticationMethodGblEnum : public Enum
{
    public:
        static const Enum::YLeaf pap;
        static const Enum::YLeaf chap;
        static const Enum::YLeaf ms_chap;

};


}
}

#endif /* _CISCO_IOS_XR_PPP_MA_GBL_CFG_ */

