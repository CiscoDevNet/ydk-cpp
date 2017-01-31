#ifndef _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_
#define _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_clns_isis_datatypes {


class IsisInternalLevelEnum : public Enum
{
    public:
        static const Enum::YLeaf not_set;
        static const Enum::YLeaf level1;
        static const Enum::YLeaf level2;

};

class IsisAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};

class IsisSubAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_ */

