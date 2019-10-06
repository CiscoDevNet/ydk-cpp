
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_TC_MIB {

const Enum::YLeaf MplsLdpLabelTypes::generic {1, "generic"};
const Enum::YLeaf MplsLdpLabelTypes::atm {2, "atm"};
const Enum::YLeaf MplsLdpLabelTypes::frameRelay {3, "frameRelay"};

const Enum::YLeaf MplsInitialCreationSource::other {1, "other"};
const Enum::YLeaf MplsInitialCreationSource::snmp {2, "snmp"};
const Enum::YLeaf MplsInitialCreationSource::ldp {3, "ldp"};
const Enum::YLeaf MplsInitialCreationSource::rsvp {4, "rsvp"};
const Enum::YLeaf MplsInitialCreationSource::crldp {5, "crldp"};
const Enum::YLeaf MplsInitialCreationSource::policyAgent {6, "policyAgent"};
const Enum::YLeaf MplsInitialCreationSource::unknown {7, "unknown"};


}
}

