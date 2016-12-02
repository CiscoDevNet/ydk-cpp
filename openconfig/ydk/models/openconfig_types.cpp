
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_types.hpp"

namespace ydk {
namespace openconfig_types {

Address_FamilyIdentity::Address_FamilyIdentity()
     : Identity("openconfig-types:ADDRESS_FAMILY")
{
}

Address_FamilyIdentity::~Address_FamilyIdentity()
{
}

Ipv6Identity::Ipv6Identity()
     : Identity("openconfig-types:IPV6")
{
}

Ipv6Identity::~Ipv6Identity()
{
}

Ipv4Identity::Ipv4Identity()
     : Identity("openconfig-types:IPV4")
{
}

Ipv4Identity::~Ipv4Identity()
{
}



}
}

