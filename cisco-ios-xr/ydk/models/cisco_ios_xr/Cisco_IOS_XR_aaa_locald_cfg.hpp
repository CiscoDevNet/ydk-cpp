#ifndef _CISCO_IOS_XR_AAA_LOCALD_CFG_
#define _CISCO_IOS_XR_AAA_LOCALD_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_locald_cfg {

class AaaLocaldTaskClass : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf read;
        static const ydk::Enum::YLeaf write;
        static const ydk::Enum::YLeaf execute;
        static const ydk::Enum::YLeaf debug;

        static int get_enum_value(const std::string & name) {
            if (name == "read") return 0;
            if (name == "write") return 1;
            if (name == "execute") return 2;
            if (name == "debug") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_AAA_LOCALD_CFG_ */

