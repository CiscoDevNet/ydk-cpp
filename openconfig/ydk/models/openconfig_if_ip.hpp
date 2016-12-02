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
        static const Enum::Value OTHER;
        static const Enum::Value STATIC;
        static const Enum::Value DYNAMIC;

};

class IpAddressOriginEnum : public Enum
{
    public:
        static const Enum::Value OTHER;
        static const Enum::Value STATIC;
        static const Enum::Value DHCP;
        static const Enum::Value LINK_LAYER;
        static const Enum::Value RANDOM;

};


}
}

#endif /* _OPENCONFIG_IF_IP_ */

