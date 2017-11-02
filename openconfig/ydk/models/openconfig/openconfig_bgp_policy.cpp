
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_bgp_policy.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_bgp_policy {

const Enum::YLeaf BgpSetCommunityOptionType::ADD {0, "ADD"};
const Enum::YLeaf BgpSetCommunityOptionType::REMOVE {1, "REMOVE"};
const Enum::YLeaf BgpSetCommunityOptionType::REPLACE {2, "REPLACE"};

const Enum::YLeaf BgpNextHopType::SELF {0, "SELF"};

const Enum::YLeaf BgpSetMedType::IGP {0, "IGP"};


}
}

