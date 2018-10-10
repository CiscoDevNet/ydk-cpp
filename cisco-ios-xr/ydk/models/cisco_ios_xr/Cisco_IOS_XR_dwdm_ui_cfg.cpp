
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_dwdm_ui_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_dwdm_ui_cfg {

const Enum::YLeaf WaveChannelNum::default_ {0, "default"};
const Enum::YLeaf WaveChannelNum::channel_wavelength {1, "channel-wavelength"};
const Enum::YLeaf WaveChannelNum::channel_frequency {2, "channel-frequency"};
const Enum::YLeaf WaveChannelNum::Y_100mhz_frequency {4, "100mhz-frequency"};

const Enum::YLeaf DwdmLoopback::none {0, "none"};
const Enum::YLeaf DwdmLoopback::line {1, "line"};
const Enum::YLeaf DwdmLoopback::internal {2, "internal"};

const Enum::YLeaf Fec::none {0, "none"};
const Enum::YLeaf Fec::standard {1, "standard"};
const Enum::YLeaf Fec::enhanced {2, "enhanced"};
const Enum::YLeaf Fec::high_gain_hd {3, "high-gain-hd"};
const Enum::YLeaf Fec::long_haul_hd {4, "long-haul-hd"};
const Enum::YLeaf Fec::high_gain_sd {5, "high-gain-sd"};
const Enum::YLeaf Fec::long_haul_sd {6, "long-haul-sd"};
const Enum::YLeaf Fec::ci_bch {7, "ci-bch"};
const Enum::YLeaf Fec::high_gain_multivendor_hd {8, "high-gain-multivendor-hd"};
const Enum::YLeaf Fec::sd_everest {9, "sd-everest"};
const Enum::YLeaf Fec::sd_denali {10, "sd-denali"};

const Enum::YLeaf OduAlarm::oci {14, "oci"};
const Enum::YLeaf OduAlarm::odu_ais {15, "odu-ais"};
const Enum::YLeaf OduAlarm::lck {16, "lck"};
const Enum::YLeaf OduAlarm::odu_bdi {17, "odu-bdi"};
const Enum::YLeaf OduAlarm::odu_sf {20, "odu-sf"};
const Enum::YLeaf OduAlarm::odu_sd {21, "odu-sd"};
const Enum::YLeaf OduAlarm::plm {22, "plm"};
const Enum::YLeaf OduAlarm::odu_tim {23, "odu-tim"};

const Enum::YLeaf PrbsMode::source {0, "source"};
const Enum::YLeaf PrbsMode::sink {1, "sink"};
const Enum::YLeaf PrbsMode::source_sink {2, "source-sink"};
const Enum::YLeaf PrbsMode::invalid {3, "invalid"};

const Enum::YLeaf ExpectedTti::expected_tti_ascii {3, "expected-tti-ascii"};
const Enum::YLeaf ExpectedTti::expected_tti_hex {4, "expected-tti-hex"};

const Enum::YLeaf DwdmAdminState::out_of_service {0, "out-of-service"};
const Enum::YLeaf DwdmAdminState::in_service {1, "in-service"};
const Enum::YLeaf DwdmAdminState::maintenance {2, "maintenance"};
const Enum::YLeaf DwdmAdminState::in_service_config_allowed {3, "in-service-config-allowed"};

const Enum::YLeaf PrbsPattern::none {0, "none"};
const Enum::YLeaf PrbsPattern::null {1, "null"};
const Enum::YLeaf PrbsPattern::pn11 {2, "pn11"};
const Enum::YLeaf PrbsPattern::pn23 {3, "pn23"};
const Enum::YLeaf PrbsPattern::pn31 {4, "pn31"};

const Enum::YLeaf OtuThreshold::prefec_sd {0, "prefec-sd"};
const Enum::YLeaf OtuThreshold::prefec_sf {1, "prefec-sf"};
const Enum::YLeaf OtuThreshold::otu_sd {4, "otu-sd"};
const Enum::YLeaf OtuThreshold::otu_sf {5, "otu-sf"};

const Enum::YLeaf OtuAlarm::los {0, "los"};
const Enum::YLeaf OtuAlarm::lof {1, "lof"};
const Enum::YLeaf OtuAlarm::lom {2, "lom"};
const Enum::YLeaf OtuAlarm::iae {6, "iae"};
const Enum::YLeaf OtuAlarm::otu_bdi {7, "otu-bdi"};
const Enum::YLeaf OtuAlarm::otu_tim {8, "otu-tim"};
const Enum::YLeaf OtuAlarm::otu_sf {10, "otu-sf"};
const Enum::YLeaf OtuAlarm::otu_sd {11, "otu-sd"};
const Enum::YLeaf OtuAlarm::fec_mismatch {24, "fec-mismatch"};
const Enum::YLeaf OtuAlarm::prefec_sd_ber {31, "prefec-sd-ber"};
const Enum::YLeaf OtuAlarm::prefec_sf_ber {32, "prefec-sf-ber"};

const Enum::YLeaf OduThreshold::odu_sd {8, "odu-sd"};
const Enum::YLeaf OduThreshold::odu_sf {9, "odu-sf"};

const Enum::YLeaf TxTti::tx_tti_ascii {0, "tx-tti-ascii"};
const Enum::YLeaf TxTti::tx_tti_hex {1, "tx-tti-hex"};

const Enum::YLeaf Efec::none {0, "none"};
const Enum::YLeaf Efec::i__DOT__4 {1, "i.4"};
const Enum::YLeaf Efec::i__DOT__7 {2, "i.7"};

const Enum::YLeaf Proactive::default_ {1, "default"};
const Enum::YLeaf Proactive::graceful {2, "graceful"};

const Enum::YLeaf Framing::opu1e {1, "opu1e"};
const Enum::YLeaf Framing::opu2e {2, "opu2e"};


}
}

