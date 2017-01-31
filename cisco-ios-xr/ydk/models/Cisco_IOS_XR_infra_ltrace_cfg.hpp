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
        static const Enum::YLeaf Y_0;
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;
        static const Enum::YLeaf Y_4;
        static const Enum::YLeaf Y_8;
        static const Enum::YLeaf Y_16;

};

class InfraLtraceModeEnum : public Enum
{
    public:
        static const Enum::YLeaf static_;
        static const Enum::YLeaf dynamic;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_LTRACE_CFG_ */

