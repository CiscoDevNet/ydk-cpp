#ifndef _IETF_IP_
#define _IETF_IP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_ip {

class NeighborOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 0;
            if (name == "static") return 1;
            if (name == "dynamic") return 2;
            return -1;
        }
};

class IpAddressOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf link_layer;
        static const ydk::Enum::YLeaf random;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 0;
            if (name == "static") return 1;
            if (name == "dhcp") return 2;
            if (name == "link-layer") return 3;
            if (name == "random") return 4;
            return -1;
        }
};


}
}

#endif /* _IETF_IP_ */

