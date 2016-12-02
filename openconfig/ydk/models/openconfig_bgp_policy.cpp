
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "openconfig_bgp_policy.hpp"

namespace ydk {
namespace openconfig_bgp_policy {


const Enum::Value BgpNextHopTypeEnum::SELF {0, "SELF"};

const Enum::Value BgpSetMedTypeEnum::IGP {0, "IGP"};

const Enum::Value BgpSetCommunityOptionTypeEnum::ADD {0, "ADD"};
const Enum::Value BgpSetCommunityOptionTypeEnum::REMOVE {1, "REMOVE"};
const Enum::Value BgpSetCommunityOptionTypeEnum::REPLACE {2, "REPLACE"};


}
}

