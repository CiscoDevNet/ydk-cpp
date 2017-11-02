
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_atm_common_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_atm_common_datatypes {

const Enum::YLeaf AtmVpShaping::cbr {1, "cbr"};
const Enum::YLeaf AtmVpShaping::vbr_nrt {2, "vbr-nrt"};
const Enum::YLeaf AtmVpShaping::vbr_rt {3, "vbr-rt"};
const Enum::YLeaf AtmVpShaping::ubr {6, "ubr"};

const Enum::YLeaf AtmPvcShaping::cbr {1, "cbr"};
const Enum::YLeaf AtmPvcShaping::vbr_nrt {2, "vbr-nrt"};
const Enum::YLeaf AtmPvcShaping::vbr_rt {3, "vbr-rt"};
const Enum::YLeaf AtmPvcShaping::ubr {6, "ubr"};

const Enum::YLeaf AtmPvcData::data {0, "data"};
const Enum::YLeaf AtmPvcData::ilmi {2, "ilmi"};
const Enum::YLeaf AtmPvcData::layer2 {3, "layer2"};

const Enum::YLeaf AtmPvcEncapsulation::snap {3, "snap"};
const Enum::YLeaf AtmPvcEncapsulation::vc_mux {4, "vc-mux"};
const Enum::YLeaf AtmPvcEncapsulation::nlpid {5, "nlpid"};
const Enum::YLeaf AtmPvcEncapsulation::aal0 {7, "aal0"};
const Enum::YLeaf AtmPvcEncapsulation::aal5 {8, "aal5"};


}
}

