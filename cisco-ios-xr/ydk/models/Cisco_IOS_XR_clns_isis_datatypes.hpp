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
        static const Enum::Value not_set;
        static const Enum::Value level1;
        static const Enum::Value level2;

};

class IsisAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;

};

class IsisSubAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value unicast;
        static const Enum::Value multicast;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_ */

