
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_DYNAMIC_TEMPLATE_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_DYNAMIC_TEMPLATE_TC_MIB {

const Enum::YLeaf DynamicTemplateType::other {1, "other"};
const Enum::YLeaf DynamicTemplateType::derived {2, "derived"};
const Enum::YLeaf DynamicTemplateType::ppp {3, "ppp"};
const Enum::YLeaf DynamicTemplateType::ethernet {4, "ethernet"};
const Enum::YLeaf DynamicTemplateType::ipSubscriber {5, "ipSubscriber"};
const Enum::YLeaf DynamicTemplateType::service {6, "service"};

const Enum::YLeaf DynamicTemplateTargetType::other {1, "other"};
const Enum::YLeaf DynamicTemplateTargetType::interface {2, "interface"};


}
}

