#ifndef _CISCO_CBP_TC_MIB_
#define _CISCO_CBP_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_CBP_TC_MIB {

class CbpexecutionstrategyEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf doUntilSuccess;
        static const Enum::YLeaf doUntilFailure;
        static const Enum::YLeaf doAll;

};


}
}

#endif /* _CISCO_CBP_TC_MIB_ */

