
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSLA_TC_MIB {

const Enum::YLeaf IpSlaOperType::icmpEcho {1, "icmpEcho"};
const Enum::YLeaf IpSlaOperType::udpEcho {2, "udpEcho"};
const Enum::YLeaf IpSlaOperType::tcpConnect {3, "tcpConnect"};
const Enum::YLeaf IpSlaOperType::udpJitter {4, "udpJitter"};
const Enum::YLeaf IpSlaOperType::icmpJitter {5, "icmpJitter"};

const Enum::YLeaf IpSlaCodecType::notApplicable {0, "notApplicable"};
const Enum::YLeaf IpSlaCodecType::g711ulaw {1, "g711ulaw"};
const Enum::YLeaf IpSlaCodecType::g711alaw {2, "g711alaw"};
const Enum::YLeaf IpSlaCodecType::g729a {3, "g729a"};

const Enum::YLeaf IpSlaReactVar::rtt {1, "rtt"};
const Enum::YLeaf IpSlaReactVar::jitterSDAvg {2, "jitterSDAvg"};
const Enum::YLeaf IpSlaReactVar::jitterDSAvg {3, "jitterDSAvg"};
const Enum::YLeaf IpSlaReactVar::packetLossSD {4, "packetLossSD"};
const Enum::YLeaf IpSlaReactVar::packetLossDS {5, "packetLossDS"};
const Enum::YLeaf IpSlaReactVar::mos {6, "mos"};
const Enum::YLeaf IpSlaReactVar::timeout {7, "timeout"};
const Enum::YLeaf IpSlaReactVar::connectionLoss {8, "connectionLoss"};
const Enum::YLeaf IpSlaReactVar::verifyError {9, "verifyError"};
const Enum::YLeaf IpSlaReactVar::jitterAvg {10, "jitterAvg"};
const Enum::YLeaf IpSlaReactVar::icpif {11, "icpif"};
const Enum::YLeaf IpSlaReactVar::packetMIA {12, "packetMIA"};
const Enum::YLeaf IpSlaReactVar::packetLateArrival {13, "packetLateArrival"};
const Enum::YLeaf IpSlaReactVar::packetOutOfSequence {14, "packetOutOfSequence"};
const Enum::YLeaf IpSlaReactVar::maxOfPositiveSD {15, "maxOfPositiveSD"};
const Enum::YLeaf IpSlaReactVar::maxOfNegativeSD {16, "maxOfNegativeSD"};
const Enum::YLeaf IpSlaReactVar::maxOfPositiveDS {17, "maxOfPositiveDS"};
const Enum::YLeaf IpSlaReactVar::maxOfNegativeDS {18, "maxOfNegativeDS"};
const Enum::YLeaf IpSlaReactVar::successivePacketLoss {19, "successivePacketLoss"};
const Enum::YLeaf IpSlaReactVar::maxOfLatencyDS {20, "maxOfLatencyDS"};
const Enum::YLeaf IpSlaReactVar::maxOfLatencySD {21, "maxOfLatencySD"};
const Enum::YLeaf IpSlaReactVar::latencyDSAvg {22, "latencyDSAvg"};
const Enum::YLeaf IpSlaReactVar::latencySDAvg {23, "latencySDAvg"};
const Enum::YLeaf IpSlaReactVar::packetLoss {24, "packetLoss"};


}
}

