
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_TC_MIB {

const Enum::YLeaf CpwOperStatus::up {1, "up"};
const Enum::YLeaf CpwOperStatus::down {2, "down"};
const Enum::YLeaf CpwOperStatus::testing {3, "testing"};
const Enum::YLeaf CpwOperStatus::unknown {4, "unknown"};
const Enum::YLeaf CpwOperStatus::dormant {5, "dormant"};
const Enum::YLeaf CpwOperStatus::notPresent {6, "notPresent"};
const Enum::YLeaf CpwOperStatus::lowerLayerDown {7, "lowerLayerDown"};

const Enum::YLeaf CpwVcType::other {0, "other"};
const Enum::YLeaf CpwVcType::frameRelay {1, "frameRelay"};
const Enum::YLeaf CpwVcType::atmAal5Vcc {2, "atmAal5Vcc"};
const Enum::YLeaf CpwVcType::atmTransparent {3, "atmTransparent"};
const Enum::YLeaf CpwVcType::ethernetVLAN {4, "ethernetVLAN"};
const Enum::YLeaf CpwVcType::ethernet {5, "ethernet"};
const Enum::YLeaf CpwVcType::hdlc {6, "hdlc"};
const Enum::YLeaf CpwVcType::ppp {7, "ppp"};
const Enum::YLeaf CpwVcType::cep {8, "cep"};
const Enum::YLeaf CpwVcType::atmVccCell {9, "atmVccCell"};
const Enum::YLeaf CpwVcType::atmVpcCell {10, "atmVpcCell"};
const Enum::YLeaf CpwVcType::ethernetVPLS {11, "ethernetVPLS"};
const Enum::YLeaf CpwVcType::e1Satop {12, "e1Satop"};
const Enum::YLeaf CpwVcType::t1Satop {13, "t1Satop"};
const Enum::YLeaf CpwVcType::e3Satop {14, "e3Satop"};
const Enum::YLeaf CpwVcType::t3Satop {15, "t3Satop"};
const Enum::YLeaf CpwVcType::basicCesPsn {16, "basicCesPsn"};
const Enum::YLeaf CpwVcType::basicTdmIp {17, "basicTdmIp"};
const Enum::YLeaf CpwVcType::tdmCasCesPsn {18, "tdmCasCesPsn"};
const Enum::YLeaf CpwVcType::tdmCasTdmIp {19, "tdmCasTdmIp"};


}
}

