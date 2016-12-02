#ifndef _CISCO_IOS_XR_INFRA_LTRACE_CFG_
#define _CISCO_IOS_XR_INFRA_LTRACE_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_ltrace_cfg {


class InfraLtraceScaleEnum : public Enum
{
    public:
        static const Enum::Value Y_0;
        static const Enum::Value Y_1;
        static const Enum::Value Y_2;
        static const Enum::Value Y_4;
        static const Enum::Value Y_8;
        static const Enum::Value Y_16;

};

class InfraLtraceModeEnum : public Enum
{
    public:
        static const Enum::Value static_;
        static const Enum::Value dynamic;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_LTRACE_CFG_ */

