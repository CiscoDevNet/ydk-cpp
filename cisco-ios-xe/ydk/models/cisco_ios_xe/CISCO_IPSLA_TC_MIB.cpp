
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_IPSLA_TC_MIB.hpp"

namespace ydk {
namespace CISCO_IPSLA_TC_MIB {

const Enum::YLeaf IpslacodectypeEnum::notApplicable {0, "notApplicable"};
const Enum::YLeaf IpslacodectypeEnum::g711ulaw {1, "g711ulaw"};
const Enum::YLeaf IpslacodectypeEnum::g711alaw {2, "g711alaw"};
const Enum::YLeaf IpslacodectypeEnum::g729a {3, "g729a"};

const Enum::YLeaf IpslaopertypeEnum::icmpEcho {1, "icmpEcho"};
const Enum::YLeaf IpslaopertypeEnum::udpEcho {2, "udpEcho"};
const Enum::YLeaf IpslaopertypeEnum::tcpConnect {3, "tcpConnect"};
const Enum::YLeaf IpslaopertypeEnum::udpJitter {4, "udpJitter"};
const Enum::YLeaf IpslaopertypeEnum::icmpJitter {5, "icmpJitter"};

const Enum::YLeaf IpslareactvarEnum::rtt {1, "rtt"};
const Enum::YLeaf IpslareactvarEnum::jitterSDAvg {2, "jitterSDAvg"};
const Enum::YLeaf IpslareactvarEnum::jitterDSAvg {3, "jitterDSAvg"};
const Enum::YLeaf IpslareactvarEnum::packetLossSD {4, "packetLossSD"};
const Enum::YLeaf IpslareactvarEnum::packetLossDS {5, "packetLossDS"};
const Enum::YLeaf IpslareactvarEnum::mos {6, "mos"};
const Enum::YLeaf IpslareactvarEnum::timeout {7, "timeout"};
const Enum::YLeaf IpslareactvarEnum::connectionLoss {8, "connectionLoss"};
const Enum::YLeaf IpslareactvarEnum::verifyError {9, "verifyError"};
const Enum::YLeaf IpslareactvarEnum::jitterAvg {10, "jitterAvg"};
const Enum::YLeaf IpslareactvarEnum::icpif {11, "icpif"};
const Enum::YLeaf IpslareactvarEnum::packetMIA {12, "packetMIA"};
const Enum::YLeaf IpslareactvarEnum::packetLateArrival {13, "packetLateArrival"};
const Enum::YLeaf IpslareactvarEnum::packetOutOfSequence {14, "packetOutOfSequence"};
const Enum::YLeaf IpslareactvarEnum::maxOfPositiveSD {15, "maxOfPositiveSD"};
const Enum::YLeaf IpslareactvarEnum::maxOfNegativeSD {16, "maxOfNegativeSD"};
const Enum::YLeaf IpslareactvarEnum::maxOfPositiveDS {17, "maxOfPositiveDS"};
const Enum::YLeaf IpslareactvarEnum::maxOfNegativeDS {18, "maxOfNegativeDS"};
const Enum::YLeaf IpslareactvarEnum::successivePacketLoss {19, "successivePacketLoss"};
const Enum::YLeaf IpslareactvarEnum::maxOfLatencyDS {20, "maxOfLatencyDS"};
const Enum::YLeaf IpslareactvarEnum::maxOfLatencySD {21, "maxOfLatencySD"};
const Enum::YLeaf IpslareactvarEnum::latencyDSAvg {22, "latencyDSAvg"};
const Enum::YLeaf IpslareactvarEnum::latencySDAvg {23, "latencySDAvg"};
const Enum::YLeaf IpslareactvarEnum::packetLoss {24, "packetLoss"};


}
}

