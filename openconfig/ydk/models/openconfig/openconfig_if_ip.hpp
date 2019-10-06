#ifndef _OPENCONFIG_IF_IP_
#define _OPENCONFIG_IF_IP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace openconfig {
namespace openconfig_if_ip {

class NeighborOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf OTHER;
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf DYNAMIC;

        static int get_enum_value(const std::string & name) {
            if (name == "OTHER") return 0;
            if (name == "STATIC") return 1;
            if (name == "DYNAMIC") return 2;
            return -1;
        }
};

class IpAddressOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf OTHER;
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf DHCP;
        static const ydk::Enum::YLeaf LINK_LAYER;
        static const ydk::Enum::YLeaf RANDOM;

        static int get_enum_value(const std::string & name) {
            if (name == "OTHER") return 0;
            if (name == "STATIC") return 1;
            if (name == "DHCP") return 2;
            if (name == "LINK_LAYER") return 3;
            if (name == "RANDOM") return 4;
            return -1;
        }
};


}
}

#endif /* _OPENCONFIG_IF_IP_ */

