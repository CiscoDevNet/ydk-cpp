
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "INET_ADDRESS_MIB.hpp"

namespace ydk {
namespace INET_ADDRESS_MIB {

const Enum::YLeaf InetaddresstypeEnum::unknown {0, "unknown"};
const Enum::YLeaf InetaddresstypeEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf InetaddresstypeEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf InetaddresstypeEnum::ipv4z {3, "ipv4z"};
const Enum::YLeaf InetaddresstypeEnum::ipv6z {4, "ipv6z"};
const Enum::YLeaf InetaddresstypeEnum::dns {16, "dns"};

const Enum::YLeaf InetscopetypeEnum::interfaceLocal {1, "interfaceLocal"};
const Enum::YLeaf InetscopetypeEnum::linkLocal {2, "linkLocal"};
const Enum::YLeaf InetscopetypeEnum::subnetLocal {3, "subnetLocal"};
const Enum::YLeaf InetscopetypeEnum::adminLocal {4, "adminLocal"};
const Enum::YLeaf InetscopetypeEnum::siteLocal {5, "siteLocal"};
const Enum::YLeaf InetscopetypeEnum::organizationLocal {8, "organizationLocal"};
const Enum::YLeaf InetscopetypeEnum::global {14, "global"};

const Enum::YLeaf InetversionEnum::unknown {0, "unknown"};
const Enum::YLeaf InetversionEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf InetversionEnum::ipv6 {2, "ipv6"};


}
}

