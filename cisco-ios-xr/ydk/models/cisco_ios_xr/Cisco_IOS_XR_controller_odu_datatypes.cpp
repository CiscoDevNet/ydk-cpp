
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_odu_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_odu_datatypes {

const Enum::YLeaf OtnChildControllerName::odu1 {1, "odu1"};
const Enum::YLeaf OtnChildControllerName::odu2 {2, "odu2"};
const Enum::YLeaf OtnChildControllerName::odu3 {3, "odu3"};
const Enum::YLeaf OtnChildControllerName::odu0 {10, "odu0"};
const Enum::YLeaf OtnChildControllerName::odu2e {11, "odu2e"};
const Enum::YLeaf OtnChildControllerName::odu1e {23, "odu1e"};
const Enum::YLeaf OtnChildControllerName::odu2f {25, "odu2f"};
const Enum::YLeaf OtnChildControllerName::odu3e1 {26, "odu3e1"};
const Enum::YLeaf OtnChildControllerName::odu3e2 {27, "odu3e2"};

const Enum::YLeaf OtnChildFlexControllerName::odu_flex {22, "odu-flex"};

const Enum::YLeaf OtnFlexMapping::gfp_f_fixed {1, "gfp-f-fixed"};
const Enum::YLeaf OtnFlexMapping::gfp_resizable {2, "gfp-resizable"};
const Enum::YLeaf OtnFlexMapping::cbr {3, "cbr"};

const Enum::YLeaf OtntcmMode::transparent {0, "transparent"};
const Enum::YLeaf OtntcmMode::nim {1, "nim"};
const Enum::YLeaf OtntcmMode::operational {2, "operational"};

const Enum::YLeaf OtnPerMon::disable {0, "disable"};
const Enum::YLeaf OtnPerMon::enable {1, "enable"};

const Enum::YLeaf OduPrbsMode::mode_invalid {0, "mode-invalid"};
const Enum::YLeaf OduPrbsMode::mode_source {1, "mode-source"};
const Enum::YLeaf OduPrbsMode::mode_sink {2, "mode-sink"};
const Enum::YLeaf OduPrbsMode::mode_source_sink {3, "mode-source-sink"};

const Enum::YLeaf OduTimeSlotGranularity::Y_1__DOT__25g {0, "1.25g"};
const Enum::YLeaf OduTimeSlotGranularity::Y_2__DOT__5g {1, "2.5g"};

const Enum::YLeaf OtnSendTtiTypeOs::send_tti_os_ascii__FWD_SLASH__os_ascii {10, "send-tti-os-ascii/os-ascii"};
const Enum::YLeaf OtnSendTtiTypeOs::send_tti_os_hex__FWD_SLASH__os_hex {12, "send-tti-os-hex/os-hex"};

const Enum::YLeaf OtnExpTtiTypeSapi::exp_tti_sapi_ascii__FWD_SLASH__sapi_ascii {15, "exp-tti-sapi-ascii/sapi-ascii"};

const Enum::YLeaf OtnTermination::ether {1, "ether"};

const Enum::YLeaf OtnSendTtiTypeSapi::send_tti_sapi_ascii__FWD_SLASH__sapi_ascii {14, "send-tti-sapi-ascii/sapi-ascii"};

const Enum::YLeaf OtnSecAdminState::normal {0, "normal"};
const Enum::YLeaf OtnSecAdminState::maintenance {1, "maintenance"};

const Enum::YLeaf OtnMapping::gfp_f {1, "gfp-f"};
const Enum::YLeaf OtnMapping::bmp {3, "bmp"};
const Enum::YLeaf OtnMapping::gmp {4, "gmp"};
const Enum::YLeaf OtnMapping::gfp_f_ext {6, "gfp-f-ext"};

const Enum::YLeaf OtnExpTtiTypeOs::exp_tti_os_ascii__FWD_SLASH__os_ascii {11, "exp-tti-os-ascii/os-ascii"};
const Enum::YLeaf OtnExpTtiTypeOs::exp_tti_os_hex__FWD_SLASH__os_hex {13, "exp-tti-os-hex/os-hex"};

const Enum::YLeaf OduDelay::disable {0, "disable"};
const Enum::YLeaf OduDelay::enable {1, "enable"};

const Enum::YLeaf OtnLoopback::line {2, "line"};
const Enum::YLeaf OtnLoopback::internal {4, "internal"};

const Enum::YLeaf OtnExpTtiTypeFull::exp_tti_full_ascii__FWD_SLASH__full_ascii {5, "exp-tti-full-ascii/full-ascii"};
const Enum::YLeaf OtnExpTtiTypeFull::exp_tti_hex__FWD_SLASH__hex {7, "exp-tti-hex/hex"};

const Enum::YLeaf OtnSendTtiTypeFull::send_tti_full_ascii__FWD_SLASH__full_ascii {4, "send-tti-full-ascii/full-ascii"};
const Enum::YLeaf OtnSendTtiTypeFull::send_tti_hex__FWD_SLASH__hex {6, "send-tti-hex/hex"};

const Enum::YLeaf OtnExpTtiTypeDapi::exp_tti_dapi_ascii__FWD_SLASH__dapi_ascii {9, "exp-tti-dapi-ascii/dapi-ascii"};

const Enum::YLeaf OtnSendTtiTypeDapi::send_tti_dapi_ascii__FWD_SLASH__dapi_ascii {8, "send-tti-dapi-ascii/dapi-ascii"};

const Enum::YLeaf Otntcmca::disable {0, "disable"};
const Enum::YLeaf Otntcmca::enable {1, "enable"};

const Enum::YLeaf Pattern::pattern_none {0, "pattern-none"};
const Enum::YLeaf Pattern::pattern_pn31 {1, "pattern-pn31"};
const Enum::YLeaf Pattern::pattern_pn23 {2, "pattern-pn23"};
const Enum::YLeaf Pattern::pattern_pn11 {4, "pattern-pn11"};
const Enum::YLeaf Pattern::pattern_inverted_pn31 {8, "pattern-inverted-pn31"};
const Enum::YLeaf Pattern::pattern_inverted_pn11 {16, "pattern-inverted-pn11"};

const Enum::YLeaf Otnpmtimca::disable {0, "disable"};
const Enum::YLeaf Otnpmtimca::enable {1, "enable"};


}
}

