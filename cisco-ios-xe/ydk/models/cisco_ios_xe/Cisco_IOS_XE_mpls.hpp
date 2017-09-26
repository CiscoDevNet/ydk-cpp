#ifndef _CISCO_IOS_XE_MPLS_
#define _CISCO_IOS_XE_MPLS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls {

class MplsTeTiebreakerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_fill;
        static const ydk::Enum::YLeaf min_fill;
        static const ydk::Enum::YLeaf random;

};

class LdpDiscoveryAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;

};


}
}

#endif /* _CISCO_IOS_XE_MPLS_ */

