
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_ospf.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_ospf {

const Enum::YLeaf PrefixApplicability::protected_ {1, "protected"};
const Enum::YLeaf PrefixApplicability::all {2, "all"};

const Enum::YLeaf AccessListInOutType::in {0, "in"};
const Enum::YLeaf AccessListInOutType::out {1, "out"};

const Enum::YLeaf OspfExternalType::Y_1 {0, "1"};
const Enum::YLeaf OspfExternalType::Y_2 {1, "2"};

const Enum::YLeaf OspfLogAdj::enable {0, "enable"};
const Enum::YLeaf OspfLogAdj::detail {1, "detail"};
const Enum::YLeaf OspfLogAdj::disable {2, "disable"};


}
}

