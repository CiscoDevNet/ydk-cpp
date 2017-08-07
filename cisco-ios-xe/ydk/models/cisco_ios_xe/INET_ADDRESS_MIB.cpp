
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "INET_ADDRESS_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace INET_ADDRESS_MIB {

const Enum::YLeaf Inetversion::unknown {0, "unknown"};
const Enum::YLeaf Inetversion::ipv4 {1, "ipv4"};
const Enum::YLeaf Inetversion::ipv6 {2, "ipv6"};

const Enum::YLeaf Inetaddresstype::unknown {0, "unknown"};
const Enum::YLeaf Inetaddresstype::ipv4 {1, "ipv4"};
const Enum::YLeaf Inetaddresstype::ipv6 {2, "ipv6"};
const Enum::YLeaf Inetaddresstype::ipv4z {3, "ipv4z"};
const Enum::YLeaf Inetaddresstype::ipv6z {4, "ipv6z"};
const Enum::YLeaf Inetaddresstype::dns {16, "dns"};

const Enum::YLeaf Inetscopetype::interfaceLocal {1, "interfaceLocal"};
const Enum::YLeaf Inetscopetype::linkLocal {2, "linkLocal"};
const Enum::YLeaf Inetscopetype::subnetLocal {3, "subnetLocal"};
const Enum::YLeaf Inetscopetype::adminLocal {4, "adminLocal"};
const Enum::YLeaf Inetscopetype::siteLocal {5, "siteLocal"};
const Enum::YLeaf Inetscopetype::organizationLocal {8, "organizationLocal"};
const Enum::YLeaf Inetscopetype::global {14, "global"};


}
}

