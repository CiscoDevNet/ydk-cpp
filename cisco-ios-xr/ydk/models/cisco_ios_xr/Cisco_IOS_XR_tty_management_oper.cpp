
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tty_management_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tty_management_oper {

HostAfIdBase::HostAfIdBase()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-tty-management-oper", "Cisco-IOS-XR-tty-management-oper", "Cisco-IOS-XR-tty-management-oper:Host-af-id-base")
{

}

HostAfIdBase::~HostAfIdBase()
{
}

Ipv4::Ipv4()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-tty-management-oper", "Cisco-IOS-XR-tty-management-oper", "Cisco-IOS-XR-tty-management-oper:ipv4")
{

}

Ipv4::~Ipv4()
{
}

Ipv6::Ipv6()
     : Identity("http://cisco.com/ns/yang/Cisco-IOS-XR-tty-management-oper", "Cisco-IOS-XR-tty-management-oper", "Cisco-IOS-XR-tty-management-oper:ipv6")
{

}

Ipv6::~Ipv6()
{
}

const Enum::YLeaf TransportService::unknown {0, "unknown"};
const Enum::YLeaf TransportService::telnet {1, "telnet"};
const Enum::YLeaf TransportService::rlogin {2, "rlogin"};
const Enum::YLeaf TransportService::ssh {3, "ssh"};


}
}

