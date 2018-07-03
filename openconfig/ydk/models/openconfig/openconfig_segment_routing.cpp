
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "openconfig_segment_routing.hpp"

using namespace ydk;

namespace openconfig {
namespace openconfig_segment_routing {

const Enum::YLeaf SrDataplaneType::MPLS {0, "MPLS"};
const Enum::YLeaf SrDataplaneType::IPV6 {1, "IPV6"};

const Enum::YLeaf MplsLabel::IPV4_EXPLICIT_NULL {0, "IPV4_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ROUTER_ALERT {1, "ROUTER_ALERT"};
const Enum::YLeaf MplsLabel::IPV6_EXPLICIT_NULL {2, "IPV6_EXPLICIT_NULL"};
const Enum::YLeaf MplsLabel::IMPLICIT_NULL {3, "IMPLICIT_NULL"};
const Enum::YLeaf MplsLabel::ENTROPY_LABEL_INDICATOR {7, "ENTROPY_LABEL_INDICATOR"};
const Enum::YLeaf MplsLabel::NO_LABEL {8, "NO_LABEL"};


}
}

