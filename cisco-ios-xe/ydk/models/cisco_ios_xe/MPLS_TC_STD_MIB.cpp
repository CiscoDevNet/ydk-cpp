
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TC_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_TC_STD_MIB {

const Enum::YLeaf MplsOwner::unknown {1, "unknown"};
const Enum::YLeaf MplsOwner::other {2, "other"};
const Enum::YLeaf MplsOwner::snmp {3, "snmp"};
const Enum::YLeaf MplsOwner::ldp {4, "ldp"};
const Enum::YLeaf MplsOwner::crldp {5, "crldp"};
const Enum::YLeaf MplsOwner::rsvpTe {6, "rsvpTe"};
const Enum::YLeaf MplsOwner::policyAgent {7, "policyAgent"};

const Enum::YLeaf MplsLspType::unknown {1, "unknown"};
const Enum::YLeaf MplsLspType::terminatingLsp {2, "terminatingLsp"};
const Enum::YLeaf MplsLspType::originatingLsp {3, "originatingLsp"};
const Enum::YLeaf MplsLspType::crossConnectingLsp {4, "crossConnectingLsp"};

const Enum::YLeaf TeHopAddressType::unknown {0, "unknown"};
const Enum::YLeaf TeHopAddressType::ipv4 {1, "ipv4"};
const Enum::YLeaf TeHopAddressType::ipv6 {2, "ipv6"};
const Enum::YLeaf TeHopAddressType::asnumber {3, "asnumber"};
const Enum::YLeaf TeHopAddressType::unnum {4, "unnum"};
const Enum::YLeaf TeHopAddressType::lspid {5, "lspid"};

const Enum::YLeaf MplsRetentionMode::conservative {1, "conservative"};
const Enum::YLeaf MplsRetentionMode::liberal {2, "liberal"};

const Enum::YLeaf MplsLabelDistributionMethod::downstreamOnDemand {1, "downstreamOnDemand"};
const Enum::YLeaf MplsLabelDistributionMethod::downstreamUnsolicited {2, "downstreamUnsolicited"};

const Enum::YLeaf MplsLdpLabelType::generic {1, "generic"};
const Enum::YLeaf MplsLdpLabelType::atm {2, "atm"};
const Enum::YLeaf MplsLdpLabelType::frameRelay {3, "frameRelay"};


}
}

