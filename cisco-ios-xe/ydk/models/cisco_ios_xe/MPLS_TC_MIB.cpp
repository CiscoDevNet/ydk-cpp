
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "MPLS_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace MPLS_TC_MIB {

const Enum::YLeaf Mplsinitialcreationsource::other {1, "other"};
const Enum::YLeaf Mplsinitialcreationsource::snmp {2, "snmp"};
const Enum::YLeaf Mplsinitialcreationsource::ldp {3, "ldp"};
const Enum::YLeaf Mplsinitialcreationsource::rsvp {4, "rsvp"};
const Enum::YLeaf Mplsinitialcreationsource::crldp {5, "crldp"};
const Enum::YLeaf Mplsinitialcreationsource::policyAgent {6, "policyAgent"};
const Enum::YLeaf Mplsinitialcreationsource::unknown {7, "unknown"};

const Enum::YLeaf Mplsldplabeltypes::generic {1, "generic"};
const Enum::YLeaf Mplsldplabeltypes::atm {2, "atm"};
const Enum::YLeaf Mplsldplabeltypes::frameRelay {3, "frameRelay"};


}
}

