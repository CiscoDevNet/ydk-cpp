
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_cfg_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_mpls_ldp_cfg_datatypes {

const Enum::YLeaf MplsLdpRouterId::address {1, "address"};

const Enum::YLeaf MplsLdpafName::ipv4 {4, "ipv4"};
const Enum::YLeaf MplsLdpafName::ipv6 {6, "ipv6"};

const Enum::YLeaf MplsLdpDownstreamOnDemand::peer_acl {1, "peer-acl"};

const Enum::YLeaf MplsLdpNbrPassword::disable {1, "disable"};
const Enum::YLeaf MplsLdpNbrPassword::specified {2, "specified"};

const Enum::YLeaf MplsLdpSessionProtection::all {1, "all"};
const Enum::YLeaf MplsLdpSessionProtection::for_ {2, "for"};
const Enum::YLeaf MplsLdpSessionProtection::all_with_duration {3, "all-with-duration"};
const Enum::YLeaf MplsLdpSessionProtection::for_with_duration {4, "for-with-duration"};
const Enum::YLeaf MplsLdpSessionProtection::all_with_forever {5, "all-with-forever"};
const Enum::YLeaf MplsLdpSessionProtection::for_with_forever {6, "for-with-forever"};


}
}

