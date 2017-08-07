
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TC_STD_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_TC_STD_MIB {

const Enum::YLeaf Tehopaddresstype::unknown {0, "unknown"};
const Enum::YLeaf Tehopaddresstype::ipv4 {1, "ipv4"};
const Enum::YLeaf Tehopaddresstype::ipv6 {2, "ipv6"};
const Enum::YLeaf Tehopaddresstype::asnumber {3, "asnumber"};
const Enum::YLeaf Tehopaddresstype::unnum {4, "unnum"};
const Enum::YLeaf Tehopaddresstype::lspid {5, "lspid"};

const Enum::YLeaf Mplslabeldistributionmethod::downstreamOnDemand {1, "downstreamOnDemand"};
const Enum::YLeaf Mplslabeldistributionmethod::downstreamUnsolicited {2, "downstreamUnsolicited"};

const Enum::YLeaf Mplsretentionmode::conservative {1, "conservative"};
const Enum::YLeaf Mplsretentionmode::liberal {2, "liberal"};

const Enum::YLeaf Mplsowner::unknown {1, "unknown"};
const Enum::YLeaf Mplsowner::other {2, "other"};
const Enum::YLeaf Mplsowner::snmp {3, "snmp"};
const Enum::YLeaf Mplsowner::ldp {4, "ldp"};
const Enum::YLeaf Mplsowner::crldp {5, "crldp"};
const Enum::YLeaf Mplsowner::rsvpTe {6, "rsvpTe"};
const Enum::YLeaf Mplsowner::policyAgent {7, "policyAgent"};

const Enum::YLeaf Mplsldplabeltype::generic {1, "generic"};
const Enum::YLeaf Mplsldplabeltype::atm {2, "atm"};
const Enum::YLeaf Mplsldplabeltype::frameRelay {3, "frameRelay"};

const Enum::YLeaf Mplslsptype::unknown {1, "unknown"};
const Enum::YLeaf Mplslsptype::terminatingLsp {2, "terminatingLsp"};
const Enum::YLeaf Mplslsptype::originatingLsp {3, "originatingLsp"};
const Enum::YLeaf Mplslsptype::crossConnectingLsp {4, "crossConnectingLsp"};


}
}

