#ifndef _IETF_IP_
#define _IETF_IP_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ietf {
namespace ietf_ip {

class IpAddressOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf link_layer;
        static const ydk::Enum::YLeaf random;

};

class NeighborOrigin : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf static_;
        static const ydk::Enum::YLeaf dynamic;

};


}
}

#endif /* _IETF_IP_ */

