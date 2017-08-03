
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IETF_PW_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IETF_PW_TC_MIB {

const Enum::YLeaf Cpwvctype::other {0, "other"};
const Enum::YLeaf Cpwvctype::frameRelay {1, "frameRelay"};
const Enum::YLeaf Cpwvctype::atmAal5Vcc {2, "atmAal5Vcc"};
const Enum::YLeaf Cpwvctype::atmTransparent {3, "atmTransparent"};
const Enum::YLeaf Cpwvctype::ethernetVLAN {4, "ethernetVLAN"};
const Enum::YLeaf Cpwvctype::ethernet {5, "ethernet"};
const Enum::YLeaf Cpwvctype::hdlc {6, "hdlc"};
const Enum::YLeaf Cpwvctype::ppp {7, "ppp"};
const Enum::YLeaf Cpwvctype::cep {8, "cep"};
const Enum::YLeaf Cpwvctype::atmVccCell {9, "atmVccCell"};
const Enum::YLeaf Cpwvctype::atmVpcCell {10, "atmVpcCell"};
const Enum::YLeaf Cpwvctype::ethernetVPLS {11, "ethernetVPLS"};
const Enum::YLeaf Cpwvctype::e1Satop {12, "e1Satop"};
const Enum::YLeaf Cpwvctype::t1Satop {13, "t1Satop"};
const Enum::YLeaf Cpwvctype::e3Satop {14, "e3Satop"};
const Enum::YLeaf Cpwvctype::t3Satop {15, "t3Satop"};
const Enum::YLeaf Cpwvctype::basicCesPsn {16, "basicCesPsn"};
const Enum::YLeaf Cpwvctype::basicTdmIp {17, "basicTdmIp"};
const Enum::YLeaf Cpwvctype::tdmCasCesPsn {18, "tdmCasCesPsn"};
const Enum::YLeaf Cpwvctype::tdmCasTdmIp {19, "tdmCasTdmIp"};

const Enum::YLeaf Cpwoperstatus::up {1, "up"};
const Enum::YLeaf Cpwoperstatus::down {2, "down"};
const Enum::YLeaf Cpwoperstatus::testing {3, "testing"};
const Enum::YLeaf Cpwoperstatus::unknown {4, "unknown"};
const Enum::YLeaf Cpwoperstatus::dormant {5, "dormant"};
const Enum::YLeaf Cpwoperstatus::notPresent {6, "notPresent"};
const Enum::YLeaf Cpwoperstatus::lowerLayerDown {7, "lowerLayerDown"};


}
}

