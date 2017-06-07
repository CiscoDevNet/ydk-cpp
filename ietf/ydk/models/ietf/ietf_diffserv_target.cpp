
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_target.hpp"

namespace ydk {
namespace ietf_diffserv_target {

DirectionIdentity::DirectionIdentity()
     : Identity("ietf-diffserv-target:direction")
{
}

DirectionIdentity::~DirectionIdentity()
{
}

InboundIdentity::InboundIdentity()
     : Identity("ietf-diffserv-target:inbound")
{
}

InboundIdentity::~InboundIdentity()
{
}

OutboundIdentity::OutboundIdentity()
     : Identity("ietf-diffserv-target:outbound")
{
}

OutboundIdentity::~OutboundIdentity()
{
}


}
}

