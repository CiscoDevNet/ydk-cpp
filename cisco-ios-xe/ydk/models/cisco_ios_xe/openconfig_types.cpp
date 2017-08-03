
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_types.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace openconfig_types {

Address_Family::Address_Family()
     : Identity("http://openconfig.net/yang/openconfig-types", "openconfig-types", "openconfig-types:ADDRESS_FAMILY")
{
}

Address_Family::~Address_Family()
{
}

Ipv6::Ipv6()
     : Identity("http://openconfig.net/yang/openconfig-types", "openconfig-types", "openconfig-types:IPV6")
{
}

Ipv6::~Ipv6()
{
}

Ipv4::Ipv4()
     : Identity("http://openconfig.net/yang/openconfig-types", "openconfig-types", "openconfig-types:IPV4")
{
}

Ipv4::~Ipv4()
{
}


}
}

