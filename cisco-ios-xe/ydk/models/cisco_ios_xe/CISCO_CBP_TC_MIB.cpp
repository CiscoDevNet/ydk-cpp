
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CBP_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CBP_TC_MIB {

const Enum::YLeaf CbpExecutionStrategy::other {1, "other"};
const Enum::YLeaf CbpExecutionStrategy::doUntilSuccess {2, "doUntilSuccess"};
const Enum::YLeaf CbpExecutionStrategy::doUntilFailure {3, "doUntilFailure"};
const Enum::YLeaf CbpExecutionStrategy::doAll {4, "doAll"};


}
}

