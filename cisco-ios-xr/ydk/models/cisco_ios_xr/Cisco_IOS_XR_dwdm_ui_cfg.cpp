
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dwdm_ui_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_dwdm_ui_cfg {

const Enum::YLeaf WaveChannelNumEnum::default_ {0, "default"};
const Enum::YLeaf WaveChannelNumEnum::channel_wavelength {1, "channel-wavelength"};
const Enum::YLeaf WaveChannelNumEnum::channel_frequency {2, "channel-frequency"};
const Enum::YLeaf WaveChannelNumEnum::Y_100mhz_frequency {4, "100mhz-frequency"};

const Enum::YLeaf DwdmLoopbackEnum::none {0, "none"};
const Enum::YLeaf DwdmLoopbackEnum::line {1, "line"};
const Enum::YLeaf DwdmLoopbackEnum::internal {2, "internal"};

const Enum::YLeaf FecEnum::none {0, "none"};
const Enum::YLeaf FecEnum::standard {1, "standard"};
const Enum::YLeaf FecEnum::enhanced {2, "enhanced"};
const Enum::YLeaf FecEnum::high_gain_hd {3, "high-gain-hd"};
const Enum::YLeaf FecEnum::long_haul_hd {4, "long-haul-hd"};
const Enum::YLeaf FecEnum::high_gain_sd {5, "high-gain-sd"};
const Enum::YLeaf FecEnum::long_haul_sd {6, "long-haul-sd"};
const Enum::YLeaf FecEnum::ci_bch {7, "ci-bch"};
const Enum::YLeaf FecEnum::high_gain_multivendor_hd {8, "high-gain-multivendor-hd"};

const Enum::YLeaf OduAlarmEnum::oci {14, "oci"};
const Enum::YLeaf OduAlarmEnum::odu_ais {15, "odu-ais"};
const Enum::YLeaf OduAlarmEnum::lck {16, "lck"};
const Enum::YLeaf OduAlarmEnum::odu_bdi {17, "odu-bdi"};
const Enum::YLeaf OduAlarmEnum::odu_sf {20, "odu-sf"};
const Enum::YLeaf OduAlarmEnum::odu_sd {21, "odu-sd"};
const Enum::YLeaf OduAlarmEnum::plm {22, "plm"};
const Enum::YLeaf OduAlarmEnum::odu_tim {23, "odu-tim"};

const Enum::YLeaf PrbsModeEnum::source {0, "source"};
const Enum::YLeaf PrbsModeEnum::sink {1, "sink"};
const Enum::YLeaf PrbsModeEnum::source_sink {2, "source-sink"};
const Enum::YLeaf PrbsModeEnum::invalid {3, "invalid"};

const Enum::YLeaf ExpectedTtiEnum::expected_tti_ascii {3, "expected-tti-ascii"};
const Enum::YLeaf ExpectedTtiEnum::expected_tti_hex {4, "expected-tti-hex"};

const Enum::YLeaf DwdmAdminStateEnum::out_of_service {0, "out-of-service"};
const Enum::YLeaf DwdmAdminStateEnum::in_service {1, "in-service"};
const Enum::YLeaf DwdmAdminStateEnum::maintenance {2, "maintenance"};
const Enum::YLeaf DwdmAdminStateEnum::in_service_config_allowed {3, "in-service-config-allowed"};

const Enum::YLeaf PrbsPatternEnum::none {0, "none"};
const Enum::YLeaf PrbsPatternEnum::null {1, "null"};
const Enum::YLeaf PrbsPatternEnum::pn11 {2, "pn11"};
const Enum::YLeaf PrbsPatternEnum::pn23 {3, "pn23"};
const Enum::YLeaf PrbsPatternEnum::pn31 {4, "pn31"};

const Enum::YLeaf OtuThresholdEnum::prefec_sd {0, "prefec-sd"};
const Enum::YLeaf OtuThresholdEnum::prefec_sf {1, "prefec-sf"};
const Enum::YLeaf OtuThresholdEnum::otu_sd {4, "otu-sd"};
const Enum::YLeaf OtuThresholdEnum::otu_sf {5, "otu-sf"};

const Enum::YLeaf OtuAlarmEnum::los {0, "los"};
const Enum::YLeaf OtuAlarmEnum::lof {1, "lof"};
const Enum::YLeaf OtuAlarmEnum::lom {2, "lom"};
const Enum::YLeaf OtuAlarmEnum::iae {6, "iae"};
const Enum::YLeaf OtuAlarmEnum::otu_bdi {7, "otu-bdi"};
const Enum::YLeaf OtuAlarmEnum::otu_tim {8, "otu-tim"};
const Enum::YLeaf OtuAlarmEnum::otu_sf {10, "otu-sf"};
const Enum::YLeaf OtuAlarmEnum::otu_sd {11, "otu-sd"};
const Enum::YLeaf OtuAlarmEnum::fec_mismatch {24, "fec-mismatch"};
const Enum::YLeaf OtuAlarmEnum::prefec_sd_ber {31, "prefec-sd-ber"};
const Enum::YLeaf OtuAlarmEnum::prefec_sf_ber {32, "prefec-sf-ber"};

const Enum::YLeaf OduThresholdEnum::odu_sd {8, "odu-sd"};
const Enum::YLeaf OduThresholdEnum::odu_sf {9, "odu-sf"};

const Enum::YLeaf TxTtiEnum::tx_tti_ascii {0, "tx-tti-ascii"};
const Enum::YLeaf TxTtiEnum::tx_tti_hex {1, "tx-tti-hex"};

const Enum::YLeaf EfecEnum::none {0, "none"};
const Enum::YLeaf EfecEnum::i__DOT__4 {1, "i.4"};
const Enum::YLeaf EfecEnum::i__DOT__7 {2, "i.7"};

const Enum::YLeaf ProactiveEnum::default_ {1, "default"};
const Enum::YLeaf ProactiveEnum::graceful {2, "graceful"};

const Enum::YLeaf FramingEnum::opu1e {1, "opu1e"};
const Enum::YLeaf FramingEnum::opu2e {2, "opu2e"};


}
}

