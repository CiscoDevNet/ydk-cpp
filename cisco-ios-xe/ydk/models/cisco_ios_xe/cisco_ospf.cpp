
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_ospf.hpp"

namespace ydk {
namespace cisco_ospf {

const Enum::YLeaf OspfLogAdjEnum::enable {0, "enable"};
const Enum::YLeaf OspfLogAdjEnum::detail {1, "detail"};
const Enum::YLeaf OspfLogAdjEnum::disable {2, "disable"};

const Enum::YLeaf PrefixApplicabilityEnum::protected_ {1, "protected"};
const Enum::YLeaf PrefixApplicabilityEnum::all {2, "all"};

const Enum::YLeaf AccessListInOutTypeEnum::in {0, "in"};
const Enum::YLeaf AccessListInOutTypeEnum::out {1, "out"};

const Enum::YLeaf OspfExternalTypeEnum::Y_1 {0, "1"};
const Enum::YLeaf OspfExternalTypeEnum::Y_2 {1, "2"};


}
}

