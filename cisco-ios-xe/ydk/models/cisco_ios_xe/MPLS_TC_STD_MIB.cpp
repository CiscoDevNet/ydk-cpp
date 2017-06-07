
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TC_STD_MIB.hpp"

namespace ydk {
namespace MPLS_TC_STD_MIB {

const Enum::YLeaf MplslabeldistributionmethodEnum::downstreamOnDemand {1, "downstreamOnDemand"};
const Enum::YLeaf MplslabeldistributionmethodEnum::downstreamUnsolicited {2, "downstreamUnsolicited"};

const Enum::YLeaf MplsretentionmodeEnum::conservative {1, "conservative"};
const Enum::YLeaf MplsretentionmodeEnum::liberal {2, "liberal"};

const Enum::YLeaf MplsldplabeltypeEnum::generic {1, "generic"};
const Enum::YLeaf MplsldplabeltypeEnum::atm {2, "atm"};
const Enum::YLeaf MplsldplabeltypeEnum::frameRelay {3, "frameRelay"};

const Enum::YLeaf TehopaddresstypeEnum::unknown {0, "unknown"};
const Enum::YLeaf TehopaddresstypeEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf TehopaddresstypeEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf TehopaddresstypeEnum::asnumber {3, "asnumber"};
const Enum::YLeaf TehopaddresstypeEnum::unnum {4, "unnum"};
const Enum::YLeaf TehopaddresstypeEnum::lspid {5, "lspid"};

const Enum::YLeaf MplslsptypeEnum::unknown {1, "unknown"};
const Enum::YLeaf MplslsptypeEnum::terminatingLsp {2, "terminatingLsp"};
const Enum::YLeaf MplslsptypeEnum::originatingLsp {3, "originatingLsp"};
const Enum::YLeaf MplslsptypeEnum::crossConnectingLsp {4, "crossConnectingLsp"};

const Enum::YLeaf MplsownerEnum::unknown {1, "unknown"};
const Enum::YLeaf MplsownerEnum::other {2, "other"};
const Enum::YLeaf MplsownerEnum::snmp {3, "snmp"};
const Enum::YLeaf MplsownerEnum::ldp {4, "ldp"};
const Enum::YLeaf MplsownerEnum::crldp {5, "crldp"};
const Enum::YLeaf MplsownerEnum::rsvpTe {6, "rsvpTe"};
const Enum::YLeaf MplsownerEnum::policyAgent {7, "policyAgent"};


}
}

