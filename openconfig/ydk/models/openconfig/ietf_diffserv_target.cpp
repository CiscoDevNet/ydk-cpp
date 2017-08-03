
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_diffserv_target.hpp"

using namespace ydk;

namespace openconfig {
namespace ietf_diffserv_target {

Direction::Direction()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-target", "ietf-diffserv-target", "ietf-diffserv-target:direction")
{
}

Direction::~Direction()
{
}

Outbound::Outbound()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-target", "ietf-diffserv-target", "ietf-diffserv-target:outbound")
{
}

Outbound::~Outbound()
{
}

Inbound::Inbound()
     : Identity("urn:ietf:params:xml:ns:yang:ietf-diffserv-target", "ietf-diffserv-target", "ietf-diffserv-target:inbound")
{
}

Inbound::~Inbound()
{
}


}
}

