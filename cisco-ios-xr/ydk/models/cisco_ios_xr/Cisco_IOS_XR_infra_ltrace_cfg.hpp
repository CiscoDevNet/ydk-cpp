#ifndef _CISCO_IOS_XR_INFRA_LTRACE_CFG_
#define _CISCO_IOS_XR_INFRA_LTRACE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_ltrace_cfg {

class InfraLtraceScale : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_0;
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;
        static const ydk::Enum::YLeaf Y_4;
        static const ydk::Enum::YLeaf Y_8;
        static const ydk::Enum::YLeaf Y_16;

};

class InfraLtraceMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

};


}
}

#endif /* _CISCO_IOS_XR_INFRA_LTRACE_CFG_ */

