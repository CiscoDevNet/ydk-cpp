
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_dwdm_ui_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dwdm_ui_cfg {


const Enum::Value WaveChannelNumEnum::default_ {0, "default"};
const Enum::Value WaveChannelNumEnum::channel_wavelength {1, "channel-wavelength"};
const Enum::Value WaveChannelNumEnum::channel_frequency {2, "channel-frequency"};
const Enum::Value WaveChannelNumEnum::Y_100mhz_frequency {4, "100mhz-frequency"};

const Enum::Value DwdmLoopbackEnum::none {0, "none"};
const Enum::Value DwdmLoopbackEnum::line {1, "line"};
const Enum::Value DwdmLoopbackEnum::internal {2, "internal"};

const Enum::Value FecEnum::none {0, "none"};
const Enum::Value FecEnum::standard {1, "standard"};
const Enum::Value FecEnum::enhanced {2, "enhanced"};
const Enum::Value FecEnum::high_gain_hd {3, "high-gain-hd"};
const Enum::Value FecEnum::long_haul_hd {4, "long-haul-hd"};
const Enum::Value FecEnum::high_gain_sd {5, "high-gain-sd"};
const Enum::Value FecEnum::long_haul_sd {6, "long-haul-sd"};
const Enum::Value FecEnum::ci_bch {7, "ci-bch"};
const Enum::Value FecEnum::high_gain_multivendor_hd {8, "high-gain-multivendor-hd"};

const Enum::Value OduAlarmEnum::oci {14, "oci"};
const Enum::Value OduAlarmEnum::odu_ais {15, "odu-ais"};
const Enum::Value OduAlarmEnum::lck {16, "lck"};
const Enum::Value OduAlarmEnum::odu_bdi {17, "odu-bdi"};
const Enum::Value OduAlarmEnum::odu_sf {20, "odu-sf"};
const Enum::Value OduAlarmEnum::odu_sd {21, "odu-sd"};
const Enum::Value OduAlarmEnum::plm {22, "plm"};
const Enum::Value OduAlarmEnum::odu_tim {23, "odu-tim"};

const Enum::Value PrbsModeEnum::source {0, "source"};
const Enum::Value PrbsModeEnum::sink {1, "sink"};
const Enum::Value PrbsModeEnum::source_sink {2, "source-sink"};
const Enum::Value PrbsModeEnum::invalid {3, "invalid"};

const Enum::Value ExpectedTtiEnum::expected_tti_ascii {3, "expected-tti-ascii"};
const Enum::Value ExpectedTtiEnum::expected_tti_hex {4, "expected-tti-hex"};

const Enum::Value DwdmAdminStateEnum::out_of_service {0, "out-of-service"};
const Enum::Value DwdmAdminStateEnum::in_service {1, "in-service"};
const Enum::Value DwdmAdminStateEnum::maintenance {2, "maintenance"};
const Enum::Value DwdmAdminStateEnum::in_service_config_allowed {3, "in-service-config-allowed"};

const Enum::Value PrbsPatternEnum::none {0, "none"};
const Enum::Value PrbsPatternEnum::null {1, "null"};
const Enum::Value PrbsPatternEnum::pn11 {2, "pn11"};
const Enum::Value PrbsPatternEnum::pn23 {3, "pn23"};
const Enum::Value PrbsPatternEnum::pn31 {4, "pn31"};

const Enum::Value OtuThresholdEnum::prefec_sd {0, "prefec-sd"};
const Enum::Value OtuThresholdEnum::prefec_sf {1, "prefec-sf"};
const Enum::Value OtuThresholdEnum::otu_sd {4, "otu-sd"};
const Enum::Value OtuThresholdEnum::otu_sf {5, "otu-sf"};

const Enum::Value OtuAlarmEnum::los {0, "los"};
const Enum::Value OtuAlarmEnum::lof {1, "lof"};
const Enum::Value OtuAlarmEnum::lom {2, "lom"};
const Enum::Value OtuAlarmEnum::iae {6, "iae"};
const Enum::Value OtuAlarmEnum::otu_bdi {7, "otu-bdi"};
const Enum::Value OtuAlarmEnum::otu_tim {8, "otu-tim"};
const Enum::Value OtuAlarmEnum::otu_sf {10, "otu-sf"};
const Enum::Value OtuAlarmEnum::otu_sd {11, "otu-sd"};
const Enum::Value OtuAlarmEnum::fec_mismatch {24, "fec-mismatch"};
const Enum::Value OtuAlarmEnum::prefec_sd_ber {31, "prefec-sd-ber"};
const Enum::Value OtuAlarmEnum::prefec_sf_ber {32, "prefec-sf-ber"};

const Enum::Value OduThresholdEnum::odu_sd {8, "odu-sd"};
const Enum::Value OduThresholdEnum::odu_sf {9, "odu-sf"};

const Enum::Value TxTtiEnum::tx_tti_ascii {0, "tx-tti-ascii"};
const Enum::Value TxTtiEnum::tx_tti_hex {1, "tx-tti-hex"};

const Enum::Value EfecEnum::none {0, "none"};
const Enum::Value EfecEnum::i__DOT__4 {1, "i.4"};
const Enum::Value EfecEnum::i__DOT__7 {2, "i.7"};

const Enum::Value ProactiveEnum::default_ {1, "default"};
const Enum::Value ProactiveEnum::graceful {2, "graceful"};

const Enum::Value FramingEnum::opu1e {1, "opu1e"};
const Enum::Value FramingEnum::opu2e {2, "opu2e"};


}
}

