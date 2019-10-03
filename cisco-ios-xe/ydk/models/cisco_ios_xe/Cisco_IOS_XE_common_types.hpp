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

        static int get_enum_value(const std::string & name) {
            if (name == "address-none") return 0;
            if (name == "ipv4-address") return 1;
            if (name == "ipv6-address") return 2;
            if (name == "ipv4-address-mcast") return 3;
            if (name == "ipv6-address-mcast") return 4;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_COMMON_TYPES_ */

