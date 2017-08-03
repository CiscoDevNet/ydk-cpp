
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_routing_ext.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_routing_ext {

Bgp::Bgp()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-routing-ext", "cisco-routing-ext", "cisco-routing-ext:bgp")
{
}

Bgp::~Bgp()
{
}

Rip::Rip()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-routing-ext", "cisco-routing-ext", "cisco-routing-ext:rip")
{
}

Rip::~Rip()
{
}

Eigrp::Eigrp()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-routing-ext", "cisco-routing-ext", "cisco-routing-ext:eigrp")
{
}

Eigrp::~Eigrp()
{
}

IsIs::IsIs()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-routing-ext", "cisco-routing-ext", "cisco-routing-ext:is-is")
{
}

IsIs::~IsIs()
{
}

Mobile::Mobile()
     : Identity("urn:cisco:params:xml:ns:yang:cisco-routing-ext", "cisco-routing-ext", "cisco-routing-ext:mobile")
{
}

Mobile::~Mobile()
{
}


}
}

