
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ptp_datatypes.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ptp_datatypes {

const Enum::YLeaf PtpTelecomClock::telecom_grandmaster {0, "telecom-grandmaster"};
const Enum::YLeaf PtpTelecomClock::telecom_boundary {1, "telecom-boundary"};
const Enum::YLeaf PtpTelecomClock::telecom_slave {2, "telecom-slave"};

const Enum::YLeaf PtpInvalidUnicastGrantRequestResponse::reduce {0, "reduce"};
const Enum::YLeaf PtpInvalidUnicastGrantRequestResponse::deny {1, "deny"};

const Enum::YLeaf PtpClockId::router_mac {0, "router-mac"};
const Enum::YLeaf PtpClockId::user_mac {1, "user-mac"};
const Enum::YLeaf PtpClockId::eui {2, "eui"};

const Enum::YLeaf PtpClockSelectionMode::Y_1588v2 {0, "1588v2"};
const Enum::YLeaf PtpClockSelectionMode::telecom_profile {1, "telecom-profile"};

const Enum::YLeaf PtpClockOperation::two_step {0, "two-step"};
const Enum::YLeaf PtpClockOperation::one_step {1, "one-step"};

const Enum::YLeaf PtpTimePeriod::Y_1 {0, "1"};
const Enum::YLeaf PtpTimePeriod::Y_2 {1, "2"};
const Enum::YLeaf PtpTimePeriod::Y_4 {2, "4"};
const Enum::YLeaf PtpTimePeriod::Y_8 {3, "8"};
const Enum::YLeaf PtpTimePeriod::Y_16 {4, "16"};
const Enum::YLeaf PtpTimePeriod::Y_32 {5, "32"};
const Enum::YLeaf PtpTimePeriod::Y_64 {6, "64"};
const Enum::YLeaf PtpTimePeriod::Y_128 {7, "128"};

const Enum::YLeaf PtpTransport::unicast {0, "unicast"};
const Enum::YLeaf PtpTransport::mixed_mode {1, "mixed-mode"};
const Enum::YLeaf PtpTransport::multicast {2, "multicast"};

const Enum::YLeaf PtpDelayAsymmetryUnits::nanoseconds {0, "nanoseconds"};
const Enum::YLeaf PtpDelayAsymmetryUnits::microseconds {1, "microseconds"};
const Enum::YLeaf PtpDelayAsymmetryUnits::milliseconds {2, "milliseconds"};

const Enum::YLeaf PtpTimescale::ptp {0, "ptp"};
const Enum::YLeaf PtpTimescale::arb {1, "arb"};

const Enum::YLeaf PtpClockProfile::default_ {0, "default"};
const Enum::YLeaf PtpClockProfile::g82651 {1, "g82651"};
const Enum::YLeaf PtpClockProfile::g82751 {2, "g82751"};
const Enum::YLeaf PtpClockProfile::g82752 {3, "g82752"};

const Enum::YLeaf PtpPortState::any {0, "any"};
const Enum::YLeaf PtpPortState::slave_only {1, "slave-only"};
const Enum::YLeaf PtpPortState::master_only {2, "master-only"};

const Enum::YLeaf PtpTimeSource::unknown {0, "unknown"};
const Enum::YLeaf PtpTimeSource::atomic_clock {16, "atomic-clock"};
const Enum::YLeaf PtpTimeSource::gps {32, "gps"};
const Enum::YLeaf PtpTimeSource::terrestrial_radio {48, "terrestrial-radio"};
const Enum::YLeaf PtpTimeSource::ptp {64, "ptp"};
const Enum::YLeaf PtpTimeSource::ntp {80, "ntp"};
const Enum::YLeaf PtpTimeSource::hand_set {96, "hand-set"};
const Enum::YLeaf PtpTimeSource::other {144, "other"};
const Enum::YLeaf PtpTimeSource::internal_oscillator {160, "internal-oscillator"};

const Enum::YLeaf PtpEncap::ethernet {1, "ethernet"};
const Enum::YLeaf PtpEncap::ipv4 {2, "ipv4"};
const Enum::YLeaf PtpEncap::ipv6 {3, "ipv6"};

const Enum::YLeaf PtpTime::interval {0, "interval"};
const Enum::YLeaf PtpTime::frequency {1, "frequency"};

const Enum::YLeaf PtpClockAdvertisementMode::Y_1588v2 {0, "1588v2"};
const Enum::YLeaf PtpClockAdvertisementMode::telecom_profile {1, "telecom-profile"};


}
}

