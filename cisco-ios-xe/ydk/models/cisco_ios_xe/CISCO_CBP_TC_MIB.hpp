#ifndef _CISCO_CBP_TC_MIB_
#define _CISCO_CBP_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_CBP_TC_MIB {

class Cbpexecutionstrategy : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf doUntilSuccess;
        static const ydk::Enum::YLeaf doUntilFailure;
        static const ydk::Enum::YLeaf doAll;

};


}
}

#endif /* _CISCO_CBP_TC_MIB_ */

