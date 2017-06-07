#ifndef _ATM_FORUM_TC_MIB_
#define _ATM_FORUM_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ATM_FORUM_TC_MIB {

class TruthvalueEnum : public Enum
{
    public:
        static const Enum::YLeaf true_;
        static const Enum::YLeaf false_;

};

class AtmservicecategoryEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf cbr;
        static const Enum::YLeaf rtVbr;
        static const Enum::YLeaf nrtVbr;
        static const Enum::YLeaf abr;
        static const Enum::YLeaf ubr;

};


}
}

#endif /* _ATM_FORUM_TC_MIB_ */

