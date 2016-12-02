
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_atm_common_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_atm_common_datatypes {


const Enum::Value AtmVpShapingEnum::cbr {1, "cbr"};
const Enum::Value AtmVpShapingEnum::vbr_nrt {2, "vbr-nrt"};
const Enum::Value AtmVpShapingEnum::vbr_rt {3, "vbr-rt"};
const Enum::Value AtmVpShapingEnum::ubr {6, "ubr"};

const Enum::Value AtmPvcShapingEnum::cbr {1, "cbr"};
const Enum::Value AtmPvcShapingEnum::vbr_nrt {2, "vbr-nrt"};
const Enum::Value AtmPvcShapingEnum::vbr_rt {3, "vbr-rt"};
const Enum::Value AtmPvcShapingEnum::ubr {6, "ubr"};

const Enum::Value AtmPvcEncapsulationEnum::snap {3, "snap"};
const Enum::Value AtmPvcEncapsulationEnum::vc_mux {4, "vc-mux"};
const Enum::Value AtmPvcEncapsulationEnum::nlpid {5, "nlpid"};
const Enum::Value AtmPvcEncapsulationEnum::aal0 {7, "aal0"};
const Enum::Value AtmPvcEncapsulationEnum::aal5 {8, "aal5"};

const Enum::Value AtmPvcDataEnum::data {0, "data"};
const Enum::Value AtmPvcDataEnum::ilmi {2, "ilmi"};
const Enum::Value AtmPvcDataEnum::layer2 {3, "layer2"};


}
}

