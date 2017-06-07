#ifndef _IETF_IP_
#define _IETF_IP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace ietf_ip {

class NeighborOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf dynamic;

};

class IpAddressOriginEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf static_;
        static const Enum::YLeaf dhcp;
        static const Enum::YLeaf link_layer;
        static const Enum::YLeaf random;

};


}
}

#endif /* _IETF_IP_ */

