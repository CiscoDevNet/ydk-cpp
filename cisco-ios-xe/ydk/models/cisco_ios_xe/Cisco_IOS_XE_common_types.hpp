#ifndef _CISCO_IOS_XE_COMMON_TYPES_
#define _CISCO_IOS_XE_COMMON_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_common_types {

class AddrType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf address_none;
        static const ydk::Enum::YLeaf ipv4_address;
        static const ydk::Enum::YLeaf ipv6_address;
        static const ydk::Enum::YLeaf ipv4_address_mcast;
        static const ydk::Enum::YLeaf ipv6_address_mcast;

};


}
}

#endif /* _CISCO_IOS_XE_COMMON_TYPES_ */

