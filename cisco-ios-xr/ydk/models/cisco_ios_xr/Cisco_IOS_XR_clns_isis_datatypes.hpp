#ifndef _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_
#define _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_datatypes {

class IsisAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};

class IsisInternalLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;

};

class IsisSubAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_ */

