#ifndef _CISCO_CBP_TC_MIB_
#define _CISCO_CBP_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_CBP_TC_MIB {

class CbpExecutionStrategy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf doUntilSuccess;
        static const ydk::Enum::YLeaf doUntilFailure;
        static const ydk::Enum::YLeaf doAll;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "doUntilSuccess") return 2;
            if (name == "doUntilFailure") return 3;
            if (name == "doAll") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_CBP_TC_MIB_ */

