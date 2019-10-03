#ifndef _CISCO_IPSLA_TC_MIB_
#define _CISCO_IPSLA_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_IPSLA_TC_MIB {

class IpSlaCodecType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf g711ulaw;
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g729a;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 0;
            if (name == "g711ulaw") return 1;
            if (name == "g711alaw") return 2;
            if (name == "g729a") return 3;
            return -1;
        }
};

class IpSlaOperType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icmpEcho;
        static const ydk::Enum::YLeaf udpEcho;
        static const ydk::Enum::YLeaf tcpConnect;
        static const ydk::Enum::YLeaf udpJitter;
        static const ydk::Enum::YLeaf icmpJitter;

        static int get_enum_value(const std::string & name) {
            if (name == "icmpEcho") return 1;
            if (name == "udpEcho") return 2;
            if (name == "tcpConnect") return 3;
            if (name == "udpJitter") return 4;
            if (name == "icmpJitter") return 5;
            return -1;
        }
};

class IpSlaReactVar : public ydk::Enum
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

        static int get_enum_value(const std::string & name) {
            if (name == "rtt") return 1;
            if (name == "jitterSDAvg") return 2;
            if (name == "jitterDSAvg") return 3;
            if (name == "packetLossSD") return 4;
            if (name == "packetLossDS") return 5;
            if (name == "mos") return 6;
            if (name == "timeout") return 7;
            if (name == "connectionLoss") return 8;
            if (name == "verifyError") return 9;
            if (name == "jitterAvg") return 10;
            if (name == "icpif") return 11;
            if (name == "packetMIA") return 12;
            if (name == "packetLateArrival") return 13;
            if (name == "packetOutOfSequence") return 14;
            if (name == "maxOfPositiveSD") return 15;
            if (name == "maxOfNegativeSD") return 16;
            if (name == "maxOfPositiveDS") return 17;
            if (name == "maxOfNegativeDS") return 18;
            if (name == "successivePacketLoss") return 19;
            if (name == "maxOfLatencyDS") return 20;
            if (name == "maxOfLatencySD") return 21;
            if (name == "latencyDSAvg") return 22;
            if (name == "latencySDAvg") return 23;
            if (name == "packetLoss") return 24;
            return -1;
        }
};


}
}

#endif /* _CISCO_IPSLA_TC_MIB_ */

