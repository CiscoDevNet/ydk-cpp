#ifndef _CISCO_IOS_XE_EEM_
#define _CISCO_IOS_XE_EEM_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_eem {

class OperatorType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf eq;
        static const ydk::Enum::YLeaf ge;
        static const ydk::Enum::YLeaf gt;
        static const ydk::Enum::YLeaf le;
        static const ydk::Enum::YLeaf lt;
        static const ydk::Enum::YLeaf ne;

        static int get_enum_value(const std::string & name) {
            if (name == "eq") return 0;
            if (name == "ge") return 1;
            if (name == "gt") return 2;
            if (name == "le") return 3;
            if (name == "lt") return 4;
            if (name == "ne") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_EEM_ */

