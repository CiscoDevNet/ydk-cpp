
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_management_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tty_management_oper {

HostAfIdBaseIdentity::HostAfIdBaseIdentity()
     : Identity("Cisco-IOS-XR-tty-management-oper-sub1:Host-af-id-base")
{
}

HostAfIdBaseIdentity::~HostAfIdBaseIdentity()
{
}

Ipv4Identity::Ipv4Identity()
     : Identity("Cisco-IOS-XR-tty-management-oper-sub1:ipv4")
{
}

Ipv4Identity::~Ipv4Identity()
{
}

Ipv6Identity::Ipv6Identity()
     : Identity("Cisco-IOS-XR-tty-management-oper-sub1:ipv6")
{
}

Ipv6Identity::~Ipv6Identity()
{
}

const Enum::YLeaf TransportServiceEnum::unknown {0, "unknown"};
const Enum::YLeaf TransportServiceEnum::telnet {1, "telnet"};
const Enum::YLeaf TransportServiceEnum::rlogin {2, "rlogin"};
const Enum::YLeaf TransportServiceEnum::ssh {3, "ssh"};


}
}

