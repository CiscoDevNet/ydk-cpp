
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_otu_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_controller_otu_cfg {

const Enum::YLeaf OtnLoopback::line {2, "line"};
const Enum::YLeaf OtnLoopback::internal {4, "internal"};

const Enum::YLeaf OtnExpTtiTypeSapi::exp_tti_sapi_ascii__FWD_SLASH__sapi_ascii {15, "exp-tti-sapi-ascii/sapi-ascii"};

const Enum::YLeaf OtnPerMon::disable {0, "disable"};
const Enum::YLeaf OtnPerMon::enable {1, "enable"};

const Enum::YLeaf OtnSendTtiTypeOs::send_tti_os_ascii__FWD_SLASH__os_ascii {10, "send-tti-os-ascii/os-ascii"};
const Enum::YLeaf OtnSendTtiTypeOs::send_tti_os_hex__FWD_SLASH__os_hex {12, "send-tti-os-hex/os-hex"};

const Enum::YLeaf OtuPattern::pattern_none {0, "pattern-none"};
const Enum::YLeaf OtuPattern::pattern_pn31 {1, "pattern-pn31"};
const Enum::YLeaf OtuPattern::pattern_pn23 {2, "pattern-pn23"};
const Enum::YLeaf OtuPattern::pattern_pn11 {4, "pattern-pn11"};
const Enum::YLeaf OtuPattern::pattern_inverted_pn31 {8, "pattern-inverted-pn31"};
const Enum::YLeaf OtuPattern::pattern_inverted_pn11 {16, "pattern-inverted-pn11"};
const Enum::YLeaf OtuPattern::pattern_pn15 {32, "pattern-pn15"};

const Enum::YLeaf OtnSendTtiTypeSapi::send_tti_sapi_ascii__FWD_SLASH__sapi_ascii {14, "send-tti-sapi-ascii/sapi-ascii"};

const Enum::YLeaf OtnSendTtiTypeDapi::send_tti_dapi_ascii__FWD_SLASH__dapi_ascii {8, "send-tti-dapi-ascii/dapi-ascii"};

const Enum::YLeaf OtuMode::mode_invalid {0, "mode-invalid"};
const Enum::YLeaf OtuMode::mode_source {1, "mode-source"};
const Enum::YLeaf OtuMode::mode_sink {2, "mode-sink"};
const Enum::YLeaf OtuMode::mode_source_sink {3, "mode-source-sink"};

const Enum::YLeaf OtnExpTtiTypeOs::exp_tti_os_ascii__FWD_SLASH__os_ascii {11, "exp-tti-os-ascii/os-ascii"};
const Enum::YLeaf OtnExpTtiTypeOs::exp_tti_os_hex__FWD_SLASH__os_hex {13, "exp-tti-os-hex/os-hex"};

const Enum::YLeaf OtnSecAdminState::normal {0, "normal"};
const Enum::YLeaf OtnSecAdminState::maintenance {1, "maintenance"};

const Enum::YLeaf OtnExpTtiTypeFull::exp_tti_full_ascii__FWD_SLASH__full_ascii {5, "exp-tti-full-ascii/full-ascii"};
const Enum::YLeaf OtnExpTtiTypeFull::exp_tti_hex__FWD_SLASH__hex {7, "exp-tti-hex/hex"};

const Enum::YLeaf OtuForwardErrorCorrection::none {1, "none"};
const Enum::YLeaf OtuForwardErrorCorrection::standard {2, "standard"};
const Enum::YLeaf OtuForwardErrorCorrection::enhanced_i7 {4, "enhanced-i7"};
const Enum::YLeaf OtuForwardErrorCorrection::enhanced_i4 {8, "enhanced-i4"};
const Enum::YLeaf OtuForwardErrorCorrection::enhanced_swizzle {16, "enhanced-swizzle"};
const Enum::YLeaf OtuForwardErrorCorrection::enhanced_hg20 {32, "enhanced-hg20"};
const Enum::YLeaf OtuForwardErrorCorrection::enhanced_hg7 {64, "enhanced-hg7"};
const Enum::YLeaf OtuForwardErrorCorrection::enhanced_sd15 {512, "enhanced-sd15"};
const Enum::YLeaf OtuForwardErrorCorrection::enhanced_sd27 {1024, "enhanced-sd27"};

const Enum::YLeaf OtnExpTtiTypeDapi::exp_tti_dapi_ascii__FWD_SLASH__dapi_ascii {9, "exp-tti-dapi-ascii/dapi-ascii"};

const Enum::YLeaf OtnSendTtiTypeFull::send_tti_full_ascii__FWD_SLASH__full_ascii {4, "send-tti-full-ascii/full-ascii"};
const Enum::YLeaf OtnSendTtiTypeFull::send_tti_hex__FWD_SLASH__hex {6, "send-tti-hex/hex"};


}
}

