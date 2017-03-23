
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_cfg_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_cfg_datatypes {

const Enum::YLeaf MplsLdpNbrPasswordEnum::disable {1, "disable"};
const Enum::YLeaf MplsLdpNbrPasswordEnum::specified {2, "specified"};

const Enum::YLeaf MplsLdpDownstreamOnDemandEnum::peer_acl {1, "peer-acl"};

const Enum::YLeaf MplsLdpRouterIdEnum::address {1, "address"};

const Enum::YLeaf MplsLdpafNameEnum::ipv4 {4, "ipv4"};
const Enum::YLeaf MplsLdpafNameEnum::ipv6 {6, "ipv6"};

const Enum::YLeaf MplsLdpSessionProtectionEnum::all {1, "all"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::for_ {2, "for"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::all_with_duration {3, "all-with-duration"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::for_with_duration {4, "for-with-duration"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::all_with_forever {5, "all-with-forever"};
const Enum::YLeaf MplsLdpSessionProtectionEnum::for_with_forever {6, "for-with-forever"};


}
}

