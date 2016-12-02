#ifndef _CISCO_IOS_XR_AAA_LOCALD_CFG_
#define _CISCO_IOS_XR_AAA_LOCALD_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_locald_cfg {


class AaaLocaldTaskClassEnum : public Enum
{
    public:
        static const Enum::Value read;
        static const Enum::Value write;
        static const Enum::Value execute;
        static const Enum::Value debug;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_LOCALD_CFG_ */

