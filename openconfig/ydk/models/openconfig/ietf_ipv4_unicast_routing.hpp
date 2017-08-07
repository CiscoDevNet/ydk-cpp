#ifndef _IETF_IPV4_UNICAST_ROUTING_
#define _IETF_IPV4_UNICAST_ROUTING_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

#include "ydk_ietf/ietf_routing.hpp"

namespace openconfig {
namespace ietf_ipv4_unicast_routing {

class Ipv4Unicast : public ietf::ietf_routing::Ipv4, virtual ydk::Identity
{
    public:
        Ipv4Unicast();
        ~Ipv4Unicast();


}; // Ipv4Unicast


}
}

#endif /* _IETF_IPV4_UNICAST_ROUTING_ */

