
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "cisco_qos_common.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace cisco_qos_common {

const Enum::YLeaf ThreshUnit::default_ {0, "default"};
const Enum::YLeaf ThreshUnit::bytes {1, "bytes"};
const Enum::YLeaf ThreshUnit::sec {2, "sec"};
const Enum::YLeaf ThreshUnit::packets {3, "packets"};
const Enum::YLeaf ThreshUnit::cells {4, "cells"};
const Enum::YLeaf ThreshUnit::percent {5, "percent"};


}
}

