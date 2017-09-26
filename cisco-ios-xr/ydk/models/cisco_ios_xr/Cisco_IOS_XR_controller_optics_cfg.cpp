
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_optics_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_optics_cfg {

const Enum::YLeaf OpticsOtsAmpliControlMode::automatic {1, "automatic"};
const Enum::YLeaf OpticsOtsAmpliControlMode::manual {2, "manual"};

const Enum::YLeaf Threshold::low {1, "low"};
const Enum::YLeaf Threshold::high {2, "high"};

const Enum::YLeaf OpticsDwdmCarrierGrid::Y_50g_hz_grid {0, "50g-hz-grid"};
const Enum::YLeaf OpticsDwdmCarrierGrid::Y_100mhz_grid {1, "100mhz-grid"};

const Enum::YLeaf OpticsDwdmCarrierParam::itu_ch {0, "itu-ch"};
const Enum::YLeaf OpticsDwdmCarrierParam::wavelength {1, "wavelength"};
const Enum::YLeaf OpticsDwdmCarrierParam::frequency {2, "frequency"};

const Enum::YLeaf OpticsOtsAmpliGainRange::normal {1, "normal"};
const Enum::YLeaf OpticsOtsAmpliGainRange::extended {2, "extended"};

const Enum::YLeaf OpticsOtsSafetyControlMode::auto_ {1, "auto"};
const Enum::YLeaf OpticsOtsSafetyControlMode::disabled {2, "disabled"};

const Enum::YLeaf OpticsLoopback::none {0, "none"};
const Enum::YLeaf OpticsLoopback::internal {1, "internal"};
const Enum::YLeaf OpticsLoopback::line {2, "line"};

const Enum::YLeaf OpticsFec::fec_none {0, "fec-none"};
const Enum::YLeaf OpticsFec::fec_h15 {1, "fec-h15"};
const Enum::YLeaf OpticsFec::fec_h25 {2, "fec-h25"};
const Enum::YLeaf OpticsFec::fec_h15_de {4, "fec-h15-de"};
const Enum::YLeaf OpticsFec::fec_h25_de {8, "fec-h25-de"};


}
}

