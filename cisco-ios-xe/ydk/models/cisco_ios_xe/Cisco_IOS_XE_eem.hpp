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

};


}
}

#endif /* _CISCO_IOS_XE_EEM_ */

