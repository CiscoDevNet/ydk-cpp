
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "ATM_FORUM_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace ATM_FORUM_TC_MIB {

const Enum::YLeaf AtmServiceCategory::other {1, "other"};
const Enum::YLeaf AtmServiceCategory::cbr {2, "cbr"};
const Enum::YLeaf AtmServiceCategory::rtVbr {3, "rtVbr"};
const Enum::YLeaf AtmServiceCategory::nrtVbr {4, "nrtVbr"};
const Enum::YLeaf AtmServiceCategory::abr {5, "abr"};
const Enum::YLeaf AtmServiceCategory::ubr {6, "ubr"};

const Enum::YLeaf TruthValue::true_ {1, "true"};
const Enum::YLeaf TruthValue::false_ {2, "false"};


}
}

