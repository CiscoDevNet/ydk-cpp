#ifndef _IETF_IPV6_UNICAST_ROUTING_
#define _IETF_IPV6_UNICAST_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_routing.hpp"

namespace ydk {
namespace ietf_ipv6_unicast_routing {

class Ipv6UnicastIdentity : public ietf_routing::Ipv6Identity, virtual Identity
{
    public:
        Ipv6UnicastIdentity();
        ~Ipv6UnicastIdentity();


}; // Ipv6UnicastIdentity


}
}

#endif /* _IETF_IPV6_UNICAST_ROUTING_ */

