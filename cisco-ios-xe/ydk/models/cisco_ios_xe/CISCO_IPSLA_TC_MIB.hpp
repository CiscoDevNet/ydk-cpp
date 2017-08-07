#ifndef _CISCO_IPSLA_TC_MIB_
#define _CISCO_IPSLA_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSLA_TC_MIB {

class Ipslaopertype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icmpEcho;
        static const ydk::Enum::YLeaf udpEcho;
        static const ydk::Enum::YLeaf tcpConnect;
        static const ydk::Enum::YLeaf udpJitter;
        static const ydk::Enum::YLeaf icmpJitter;

};

class Ipslareactvar : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf rtt;
        static const ydk::Enum::YLeaf jitterSDAvg;
        static const ydk::Enum::YLeaf jitterDSAvg;
        static const ydk::Enum::YLeaf packetLossSD;
        static const ydk::Enum::YLeaf packetLossDS;
        static const ydk::Enum::YLeaf mos;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf connectionLoss;
        static const ydk::Enum::YLeaf verifyError;
        static const ydk::Enum::YLeaf jitterAvg;
        static const ydk::Enum::YLeaf icpif;
        static const ydk::Enum::YLeaf packetMIA;
        static const ydk::Enum::YLeaf packetLateArrival;
        static const ydk::Enum::YLeaf packetOutOfSequence;
        static const ydk::Enum::YLeaf maxOfPositiveSD;
        static const ydk::Enum::YLeaf maxOfNegativeSD;
        static const ydk::Enum::YLeaf maxOfPositiveDS;
        static const ydk::Enum::YLeaf maxOfNegativeDS;
        static const ydk::Enum::YLeaf successivePacketLoss;
        static const ydk::Enum::YLeaf maxOfLatencyDS;
        static const ydk::Enum::YLeaf maxOfLatencySD;
        static const ydk::Enum::YLeaf latencyDSAvg;
        static const ydk::Enum::YLeaf latencySDAvg;
        static const ydk::Enum::YLeaf packetLoss;

};

class Ipslacodectype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf g711ulaw;
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g729a;

};


}
}

#endif /* _CISCO_IPSLA_TC_MIB_ */

