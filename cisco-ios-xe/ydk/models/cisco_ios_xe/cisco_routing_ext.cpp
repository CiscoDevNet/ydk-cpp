
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_routing_ext.hpp"

namespace ydk {
namespace cisco_routing_ext {

BgpIdentity::BgpIdentity()
     : Identity("cisco-routing-ext:bgp")
{
}

BgpIdentity::~BgpIdentity()
{
}

MobileIdentity::MobileIdentity()
     : Identity("cisco-routing-ext:mobile")
{
}

MobileIdentity::~MobileIdentity()
{
}

EigrpIdentity::EigrpIdentity()
     : Identity("cisco-routing-ext:eigrp")
{
}

EigrpIdentity::~EigrpIdentity()
{
}

IsIsIdentity::IsIsIdentity()
     : Identity("cisco-routing-ext:is-is")
{
}

IsIsIdentity::~IsIsIdentity()
{
}

RipIdentity::RipIdentity()
     : Identity("cisco-routing-ext:rip")
{
}

RipIdentity::~RipIdentity()
{
}


}
}

