#ifndef _IETF_IPV6_UNICAST_ROUTING_
#define _IETF_IPV6_UNICAST_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_routing.hpp"

namespace cisco_ios_xe {
namespace ietf_ipv6_unicast_routing {

class Ipv6Unicast : public ietf_routing::Ipv6, virtual ydk::Identity
{
    public:
        Ipv6Unicast();
        ~Ipv6Unicast();


}; // Ipv6Unicast


}
}

#endif /* _IETF_IPV6_UNICAST_ROUTING_ */

