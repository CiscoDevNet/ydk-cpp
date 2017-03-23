
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_controller_otu_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_controller_otu_cfg {

const Enum::YLeaf OtnLoopbackEnum::line {2, "line"};
const Enum::YLeaf OtnLoopbackEnum::internal {4, "internal"};

const Enum::YLeaf OtnExpTtiTypeSapiEnum::exp_tti_sapi_ascii__FWD_SLASH__sapi_ascii {15, "exp-tti-sapi-ascii/sapi-ascii"};

const Enum::YLeaf OtnPerMonEnum::disable {0, "disable"};
const Enum::YLeaf OtnPerMonEnum::enable {1, "enable"};

const Enum::YLeaf OtnSendTtiTypeOsEnum::send_tti_os_ascii__FWD_SLASH__os_ascii {10, "send-tti-os-ascii/os-ascii"};
const Enum::YLeaf OtnSendTtiTypeOsEnum::send_tti_os_hex__FWD_SLASH__os_hex {12, "send-tti-os-hex/os-hex"};

const Enum::YLeaf OtnSendTtiTypeSapiEnum::send_tti_sapi_ascii__FWD_SLASH__sapi_ascii {14, "send-tti-sapi-ascii/sapi-ascii"};

const Enum::YLeaf OtnSendTtiTypeDapiEnum::send_tti_dapi_ascii__FWD_SLASH__dapi_ascii {8, "send-tti-dapi-ascii/dapi-ascii"};

const Enum::YLeaf OtnExpTtiTypeOsEnum::exp_tti_os_ascii__FWD_SLASH__os_ascii {11, "exp-tti-os-ascii/os-ascii"};
const Enum::YLeaf OtnExpTtiTypeOsEnum::exp_tti_os_hex__FWD_SLASH__os_hex {13, "exp-tti-os-hex/os-hex"};

const Enum::YLeaf OtnSecAdminStateEnum::normal {0, "normal"};
const Enum::YLeaf OtnSecAdminStateEnum::maintenance {1, "maintenance"};

const Enum::YLeaf OtnExpTtiTypeFullEnum::exp_tti_full_ascii__FWD_SLASH__full_ascii {5, "exp-tti-full-ascii/full-ascii"};
const Enum::YLeaf OtnExpTtiTypeFullEnum::exp_tti_hex__FWD_SLASH__hex {7, "exp-tti-hex/hex"};

const Enum::YLeaf OtuForwardErrorCorrectionEnum::none {1, "none"};
const Enum::YLeaf OtuForwardErrorCorrectionEnum::standard {2, "standard"};
const Enum::YLeaf OtuForwardErrorCorrectionEnum::enhanced_i7 {4, "enhanced-i7"};
const Enum::YLeaf OtuForwardErrorCorrectionEnum::enhanced_i4 {8, "enhanced-i4"};
const Enum::YLeaf OtuForwardErrorCorrectionEnum::enhanced_swizzle {16, "enhanced-swizzle"};
const Enum::YLeaf OtuForwardErrorCorrectionEnum::enhanced_hg20 {32, "enhanced-hg20"};
const Enum::YLeaf OtuForwardErrorCorrectionEnum::enhanced_hg7 {64, "enhanced-hg7"};

const Enum::YLeaf OtnExpTtiTypeDapiEnum::exp_tti_dapi_ascii__FWD_SLASH__dapi_ascii {9, "exp-tti-dapi-ascii/dapi-ascii"};

const Enum::YLeaf OtnSendTtiTypeFullEnum::send_tti_full_ascii__FWD_SLASH__full_ascii {4, "send-tti-full-ascii/full-ascii"};
const Enum::YLeaf OtnSendTtiTypeFullEnum::send_tti_hex__FWD_SLASH__hex {6, "send-tti-hex/hex"};


}
}

