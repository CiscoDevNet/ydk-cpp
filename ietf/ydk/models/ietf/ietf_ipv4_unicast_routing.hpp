#ifndef _IETF_IPV4_UNICAST_ROUTING_
#define _IETF_IPV4_UNICAST_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ietf_routing.hpp"

namespace ydk {
namespace ietf_ipv4_unicast_routing {

class Ipv4UnicastIdentity : public ietf_routing::Ipv4Identity, virtual Identity
{
    public:
        Ipv4UnicastIdentity();
        ~Ipv4UnicastIdentity();


}; // Ipv4UnicastIdentity


}
}

#endif /* _IETF_IPV4_UNICAST_ROUTING_ */

