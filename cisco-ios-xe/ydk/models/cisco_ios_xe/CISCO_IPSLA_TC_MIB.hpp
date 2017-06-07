#ifndef _CISCO_IPSLA_TC_MIB_
#define _CISCO_IPSLA_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_IPSLA_TC_MIB {

class IpslacodectypeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf g711ulaw;
        static const Enum::YLeaf g711alaw;
        static const Enum::YLeaf g729a;

};

class IpslaopertypeEnum : public Enum
{
    public:
        static const Enum::YLeaf icmpEcho;
        static const Enum::YLeaf udpEcho;
        static const Enum::YLeaf tcpConnect;
        static const Enum::YLeaf udpJitter;
        static const Enum::YLeaf icmpJitter;

};

class IpslareactvarEnum : public Enum
{
    public:
        static const Enum::YLeaf rtt;
        static const Enum::YLeaf jitterSDAvg;
        static const Enum::YLeaf jitterDSAvg;
        static const Enum::YLeaf packetLossSD;
        static const Enum::YLeaf packetLossDS;
        static const Enum::YLeaf mos;
        static const Enum::YLeaf timeout;
        static const Enum::YLeaf connectionLoss;
        static const Enum::YLeaf verifyError;
        static const Enum::YLeaf jitterAvg;
        static const Enum::YLeaf icpif;
        static const Enum::YLeaf packetMIA;
        static const Enum::YLeaf packetLateArrival;
        static const Enum::YLeaf packetOutOfSequence;
        static const Enum::YLeaf maxOfPositiveSD;
        static const Enum::YLeaf maxOfNegativeSD;
        static const Enum::YLeaf maxOfPositiveDS;
        static const Enum::YLeaf maxOfNegativeDS;
        static const Enum::YLeaf successivePacketLoss;
        static const Enum::YLeaf maxOfLatencyDS;
        static const Enum::YLeaf maxOfLatencySD;
        static const Enum::YLeaf latencyDSAvg;
        static const Enum::YLeaf latencySDAvg;
        static const Enum::YLeaf packetLoss;

};


}
}

#endif /* _CISCO_IPSLA_TC_MIB_ */

