
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "INET_ADDRESS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace INET_ADDRESS_MIB {

const Enum::YLeaf InetAddressType::unknown {0, "unknown"};
const Enum::YLeaf InetAddressType::ipv4 {1, "ipv4"};
const Enum::YLeaf InetAddressType::ipv6 {2, "ipv6"};
const Enum::YLeaf InetAddressType::ipv4z {3, "ipv4z"};
const Enum::YLeaf InetAddressType::ipv6z {4, "ipv6z"};
const Enum::YLeaf InetAddressType::dns {16, "dns"};

const Enum::YLeaf InetScopeType::interfaceLocal {1, "interfaceLocal"};
const Enum::YLeaf InetScopeType::linkLocal {2, "linkLocal"};
const Enum::YLeaf InetScopeType::subnetLocal {3, "subnetLocal"};
const Enum::YLeaf InetScopeType::adminLocal {4, "adminLocal"};
const Enum::YLeaf InetScopeType::siteLocal {5, "siteLocal"};
const Enum::YLeaf InetScopeType::organizationLocal {8, "organizationLocal"};
const Enum::YLeaf InetScopeType::global {14, "global"};

const Enum::YLeaf InetVersion::unknown {0, "unknown"};
const Enum::YLeaf InetVersion::ipv4 {1, "ipv4"};
const Enum::YLeaf InetVersion::ipv6 {2, "ipv6"};


}
}

