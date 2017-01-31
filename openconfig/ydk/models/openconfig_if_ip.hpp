#ifndef _OPENCONFIG_IF_IP_
#define _OPENCONFIG_IF_IP_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace openconfig_if_ip {


class NeighborOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf OTHER;
        static const Enum::YLeaf STATIC;
        static const Enum::YLeaf DYNAMIC;

};

class IpAddressOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf OTHER;
        static const Enum::YLeaf STATIC;
        static const Enum::YLeaf DHCP;
        static const Enum::YLeaf LINK_LAYER;
        static const Enum::YLeaf RANDOM;

};


}
}

#endif /* _OPENCONFIG_IF_IP_ */

