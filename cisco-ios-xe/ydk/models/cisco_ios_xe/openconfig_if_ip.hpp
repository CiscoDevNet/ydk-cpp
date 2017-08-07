#ifndef _OPENCONFIG_IF_IP_
#define _OPENCONFIG_IF_IP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace openconfig_if_ip {

class NeighborOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf OTHER;
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf DYNAMIC;

};

class IpAddressOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf OTHER;
        static const ydk::Enum::YLeaf STATIC;
        static const ydk::Enum::YLeaf DHCP;
        static const ydk::Enum::YLeaf LINK_LAYER;
        static const ydk::Enum::YLeaf RANDOM;

};


}
}

#endif /* _OPENCONFIG_IF_IP_ */

