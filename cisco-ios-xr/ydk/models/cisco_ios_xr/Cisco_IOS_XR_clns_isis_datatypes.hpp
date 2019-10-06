#ifndef _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_
#define _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_datatypes {

class IsisInternalLevel : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf level1;
        static const ydk::Enum::YLeaf level2;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "level1") return 1;
            if (name == "level2") return 2;
            return -1;
        }
};

class IsisAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 0;
            if (name == "ipv6") return 1;
            return -1;
        }
};

class IsisSubAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 0;
            if (name == "multicast") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_CLNS_ISIS_DATATYPES_ */

