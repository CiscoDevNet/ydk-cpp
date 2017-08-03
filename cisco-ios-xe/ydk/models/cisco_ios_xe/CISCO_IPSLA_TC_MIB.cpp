
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_IPSLA_TC_MIB {

const Enum::YLeaf Ipslaopertype::icmpEcho {1, "icmpEcho"};
const Enum::YLeaf Ipslaopertype::udpEcho {2, "udpEcho"};
const Enum::YLeaf Ipslaopertype::tcpConnect {3, "tcpConnect"};
const Enum::YLeaf Ipslaopertype::udpJitter {4, "udpJitter"};
const Enum::YLeaf Ipslaopertype::icmpJitter {5, "icmpJitter"};

const Enum::YLeaf Ipslareactvar::rtt {1, "rtt"};
const Enum::YLeaf Ipslareactvar::jitterSDAvg {2, "jitterSDAvg"};
const Enum::YLeaf Ipslareactvar::jitterDSAvg {3, "jitterDSAvg"};
const Enum::YLeaf Ipslareactvar::packetLossSD {4, "packetLossSD"};
const Enum::YLeaf Ipslareactvar::packetLossDS {5, "packetLossDS"};
const Enum::YLeaf Ipslareactvar::mos {6, "mos"};
const Enum::YLeaf Ipslareactvar::timeout {7, "timeout"};
const Enum::YLeaf Ipslareactvar::connectionLoss {8, "connectionLoss"};
const Enum::YLeaf Ipslareactvar::verifyError {9, "verifyError"};
const Enum::YLeaf Ipslareactvar::jitterAvg {10, "jitterAvg"};
const Enum::YLeaf Ipslareactvar::icpif {11, "icpif"};
const Enum::YLeaf Ipslareactvar::packetMIA {12, "packetMIA"};
const Enum::YLeaf Ipslareactvar::packetLateArrival {13, "packetLateArrival"};
const Enum::YLeaf Ipslareactvar::packetOutOfSequence {14, "packetOutOfSequence"};
const Enum::YLeaf Ipslareactvar::maxOfPositiveSD {15, "maxOfPositiveSD"};
const Enum::YLeaf Ipslareactvar::maxOfNegativeSD {16, "maxOfNegativeSD"};
const Enum::YLeaf Ipslareactvar::maxOfPositiveDS {17, "maxOfPositiveDS"};
const Enum::YLeaf Ipslareactvar::maxOfNegativeDS {18, "maxOfNegativeDS"};
const Enum::YLeaf Ipslareactvar::successivePacketLoss {19, "successivePacketLoss"};
const Enum::YLeaf Ipslareactvar::maxOfLatencyDS {20, "maxOfLatencyDS"};
const Enum::YLeaf Ipslareactvar::maxOfLatencySD {21, "maxOfLatencySD"};
const Enum::YLeaf Ipslareactvar::latencyDSAvg {22, "latencyDSAvg"};
const Enum::YLeaf Ipslareactvar::latencySDAvg {23, "latencySDAvg"};
const Enum::YLeaf Ipslareactvar::packetLoss {24, "packetLoss"};

const Enum::YLeaf Ipslacodectype::notApplicable {0, "notApplicable"};
const Enum::YLeaf Ipslacodectype::g711ulaw {1, "g711ulaw"};
const Enum::YLeaf Ipslacodectype::g711alaw {2, "g711alaw"};
const Enum::YLeaf Ipslacodectype::g729a {3, "g729a"};


}
}

