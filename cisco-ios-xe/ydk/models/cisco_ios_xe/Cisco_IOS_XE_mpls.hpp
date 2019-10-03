#ifndef _CISCO_IOS_XE_MPLS_
#define _CISCO_IOS_XE_MPLS_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_mpls {

class LdpDiscoveryAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interface;

        static int get_enum_value(const std::string & name) {
            if (name == "interface") return 0;
            return -1;
        }
};

class MplsTeTiebreakerType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf max_fill;
        static const ydk::Enum::YLeaf min_fill;
        static const ydk::Enum::YLeaf random;

        static int get_enum_value(const std::string & name) {
            if (name == "max-fill") return 0;
            if (name == "min-fill") return 1;
            if (name == "random") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_MPLS_ */

