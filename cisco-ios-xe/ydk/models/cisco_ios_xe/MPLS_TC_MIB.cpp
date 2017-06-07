
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TC_MIB.hpp"

namespace ydk {
namespace MPLS_TC_MIB {

const Enum::YLeaf MplsldplabeltypesEnum::generic {1, "generic"};
const Enum::YLeaf MplsldplabeltypesEnum::atm {2, "atm"};
const Enum::YLeaf MplsldplabeltypesEnum::frameRelay {3, "frameRelay"};

const Enum::YLeaf MplsinitialcreationsourceEnum::other {1, "other"};
const Enum::YLeaf MplsinitialcreationsourceEnum::snmp {2, "snmp"};
const Enum::YLeaf MplsinitialcreationsourceEnum::ldp {3, "ldp"};
const Enum::YLeaf MplsinitialcreationsourceEnum::rsvp {4, "rsvp"};
const Enum::YLeaf MplsinitialcreationsourceEnum::crldp {5, "crldp"};
const Enum::YLeaf MplsinitialcreationsourceEnum::policyAgent {6, "policyAgent"};
const Enum::YLeaf MplsinitialcreationsourceEnum::unknown {7, "unknown"};


}
}

