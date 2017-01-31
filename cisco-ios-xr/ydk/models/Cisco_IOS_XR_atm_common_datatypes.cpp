
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_atm_common_datatypes.hpp"

namespace ydk {
namespace Cisco_IOS_XR_atm_common_datatypes {


const Enum::YLeaf AtmVpShapingEnum::cbr {1, "cbr"};
const Enum::YLeaf AtmVpShapingEnum::vbr_nrt {2, "vbr-nrt"};
const Enum::YLeaf AtmVpShapingEnum::vbr_rt {3, "vbr-rt"};
const Enum::YLeaf AtmVpShapingEnum::ubr {6, "ubr"};

const Enum::YLeaf AtmPvcShapingEnum::cbr {1, "cbr"};
const Enum::YLeaf AtmPvcShapingEnum::vbr_nrt {2, "vbr-nrt"};
const Enum::YLeaf AtmPvcShapingEnum::vbr_rt {3, "vbr-rt"};
const Enum::YLeaf AtmPvcShapingEnum::ubr {6, "ubr"};

const Enum::YLeaf AtmPvcEncapsulationEnum::snap {3, "snap"};
const Enum::YLeaf AtmPvcEncapsulationEnum::vc_mux {4, "vc-mux"};
const Enum::YLeaf AtmPvcEncapsulationEnum::nlpid {5, "nlpid"};
const Enum::YLeaf AtmPvcEncapsulationEnum::aal0 {7, "aal0"};
const Enum::YLeaf AtmPvcEncapsulationEnum::aal5 {8, "aal5"};

const Enum::YLeaf AtmPvcDataEnum::data {0, "data"};
const Enum::YLeaf AtmPvcDataEnum::ilmi {2, "ilmi"};
const Enum::YLeaf AtmPvcDataEnum::layer2 {3, "layer2"};


}
}

