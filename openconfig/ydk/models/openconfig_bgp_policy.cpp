
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_bgp_policy.hpp"

namespace ydk {
namespace openconfig_bgp_policy {


const Enum::YLeaf BgpNextHopTypeEnum::SELF {0, "SELF"};

const Enum::YLeaf BgpSetMedTypeEnum::IGP {0, "IGP"};

const Enum::YLeaf BgpSetCommunityOptionTypeEnum::ADD {0, "ADD"};
const Enum::YLeaf BgpSetCommunityOptionTypeEnum::REMOVE {1, "REMOVE"};
const Enum::YLeaf BgpSetCommunityOptionTypeEnum::REPLACE {2, "REPLACE"};


}
}

