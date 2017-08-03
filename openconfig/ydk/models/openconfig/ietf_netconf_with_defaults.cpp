
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ietf_netconf_with_defaults.hpp"

using namespace ydk;

namespace openconfig {
namespace ietf_netconf_with_defaults {

const Enum::YLeaf WithDefaultsMode::report_all {0, "report-all"};
const Enum::YLeaf WithDefaultsMode::report_all_tagged {1, "report-all-tagged"};
const Enum::YLeaf WithDefaultsMode::trim {2, "trim"};
const Enum::YLeaf WithDefaultsMode::explicit_ {3, "explicit"};


}
}

