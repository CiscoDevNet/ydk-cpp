#ifndef _CISCO_RTTMON_TC_MIB_
#define _CISCO_RTTMON_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_RTTMON_TC_MIB {

class RttMonRttType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf pathEcho;
        static const ydk::Enum::YLeaf fileIO;
        static const ydk::Enum::YLeaf script;
        static const ydk::Enum::YLeaf udpEcho;
        static const ydk::Enum::YLeaf tcpConnect;
        static const ydk::Enum::YLeaf http;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf jitter;
        static const ydk::Enum::YLeaf dlsw;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf ftp;
        static const ydk::Enum::YLeaf voip;
        static const ydk::Enum::YLeaf rtp;
        static const ydk::Enum::YLeaf lspGroup;
        static const ydk::Enum::YLeaf icmpjitter;
        static const ydk::Enum::YLeaf lspPing;
        static const ydk::Enum::YLeaf lspTrace;
        static const ydk::Enum::YLeaf ethernetPing;
        static const ydk::Enum::YLeaf ethernetJitter;
        static const ydk::Enum::YLeaf lspPingPseudowire;
        static const ydk::Enum::YLeaf video;
        static const ydk::Enum::YLeaf y1731Delay;
        static const ydk::Enum::YLeaf y1731Loss;
        static const ydk::Enum::YLeaf mcastJitter;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "echo") return 1;
            if (name == "pathEcho") return 2;
            if (name == "fileIO") return 3;
            if (name == "script") return 4;
            if (name == "udpEcho") return 5;
            if (name == "tcpConnect") return 6;
            if (name == "http") return 7;
            if (name == "dns") return 8;
            if (name == "jitter") return 9;
            if (name == "dlsw") return 10;
            if (name == "dhcp") return 11;
            if (name == "ftp") return 12;
            if (name == "voip") return 13;
            if (name == "rtp") return 14;
            if (name == "lspGroup") return 15;
            if (name == "icmpjitter") return 16;
            if (name == "lspPing") return 17;
            if (name == "lspTrace") return 18;
            if (name == "ethernetPing") return 19;
            if (name == "ethernetJitter") return 20;
            if (name == "lspPingPseudowire") return 21;
            if (name == "video") return 22;
            if (name == "y1731Delay") return 23;
            if (name == "y1731Loss") return 24;
            if (name == "mcastJitter") return 25;
            return -1;
        }
};

class RttMonLSPPingReplyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf replyIpv4Udp;
        static const ydk::Enum::YLeaf replyIpv4UdpRA;

        static int get_enum_value(const std::string & name) {
            if (name == "replyIpv4Udp") return 1;
            if (name == "replyIpv4UdpRA") return 2;
            return -1;
        }
};

class RttMonProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf ipIcmpEcho;
        static const ydk::Enum::YLeaf ipUdpEchoAppl;
        static const ydk::Enum::YLeaf snaRUEcho;
        static const ydk::Enum::YLeaf snaLU0EchoAppl;
        static const ydk::Enum::YLeaf snaLU2EchoAppl;
        static const ydk::Enum::YLeaf snaLU62Echo;
        static const ydk::Enum::YLeaf snaLU62EchoAppl;
        static const ydk::Enum::YLeaf appleTalkEcho;
        static const ydk::Enum::YLeaf appleTalkEchoAppl;
        static const ydk::Enum::YLeaf decNetEcho;
        static const ydk::Enum::YLeaf decNetEchoAppl;
        static const ydk::Enum::YLeaf ipxEcho;
        static const ydk::Enum::YLeaf ipxEchoAppl;
        static const ydk::Enum::YLeaf isoClnsEcho;
        static const ydk::Enum::YLeaf isoClnsEchoAppl;
        static const ydk::Enum::YLeaf vinesEcho;
        static const ydk::Enum::YLeaf vinesEchoAppl;
        static const ydk::Enum::YLeaf xnsEcho;
        static const ydk::Enum::YLeaf xnsEchoAppl;
        static const ydk::Enum::YLeaf apolloEcho;
        static const ydk::Enum::YLeaf apolloEchoAppl;
        static const ydk::Enum::YLeaf netbiosEchoAppl;
        static const ydk::Enum::YLeaf ipTcpConn;
        static const ydk::Enum::YLeaf httpAppl;
        static const ydk::Enum::YLeaf dnsAppl;
        static const ydk::Enum::YLeaf jitterAppl;
        static const ydk::Enum::YLeaf dlswAppl;
        static const ydk::Enum::YLeaf dhcpAppl;
        static const ydk::Enum::YLeaf ftpAppl;
        static const ydk::Enum::YLeaf mplsLspPingAppl;
        static const ydk::Enum::YLeaf voipAppl;
        static const ydk::Enum::YLeaf rtpAppl;
        static const ydk::Enum::YLeaf icmpJitterAppl;
        static const ydk::Enum::YLeaf ethernetPingAppl;
        static const ydk::Enum::YLeaf ethernetJitterAppl;
        static const ydk::Enum::YLeaf videoAppl;
        static const ydk::Enum::YLeaf y1731dmm;
        static const ydk::Enum::YLeaf y17311dm;
        static const ydk::Enum::YLeaf y1731lmm;
        static const ydk::Enum::YLeaf mcastJitterAppl;
        static const ydk::Enum::YLeaf y1731slm;
        static const ydk::Enum::YLeaf y1731dmmv1;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "notApplicable") return 1;
            if (name == "ipIcmpEcho") return 2;
            if (name == "ipUdpEchoAppl") return 3;
            if (name == "snaRUEcho") return 4;
            if (name == "snaLU0EchoAppl") return 5;
            if (name == "snaLU2EchoAppl") return 6;
            if (name == "snaLU62Echo") return 7;
            if (name == "snaLU62EchoAppl") return 8;
            if (name == "appleTalkEcho") return 9;
            if (name == "appleTalkEchoAppl") return 10;
            if (name == "decNetEcho") return 11;
            if (name == "decNetEchoAppl") return 12;
            if (name == "ipxEcho") return 13;
            if (name == "ipxEchoAppl") return 14;
            if (name == "isoClnsEcho") return 15;
            if (name == "isoClnsEchoAppl") return 16;
            if (name == "vinesEcho") return 17;
            if (name == "vinesEchoAppl") return 18;
            if (name == "xnsEcho") return 19;
            if (name == "xnsEchoAppl") return 20;
            if (name == "apolloEcho") return 21;
            if (name == "apolloEchoAppl") return 22;
            if (name == "netbiosEchoAppl") return 23;
            if (name == "ipTcpConn") return 24;
            if (name == "httpAppl") return 25;
            if (name == "dnsAppl") return 26;
            if (name == "jitterAppl") return 27;
            if (name == "dlswAppl") return 28;
            if (name == "dhcpAppl") return 29;
            if (name == "ftpAppl") return 30;
            if (name == "mplsLspPingAppl") return 31;
            if (name == "voipAppl") return 32;
            if (name == "rtpAppl") return 33;
            if (name == "icmpJitterAppl") return 34;
            if (name == "ethernetPingAppl") return 35;
            if (name == "ethernetJitterAppl") return 36;
            if (name == "videoAppl") return 37;
            if (name == "y1731dmm") return 38;
            if (name == "y17311dm") return 39;
            if (name == "y1731lmm") return 40;
            if (name == "mcastJitterAppl") return 41;
            if (name == "y1731slm") return 42;
            if (name == "y1731dmmv1") return 43;
            return -1;
        }
};

class RttMplsVpnMonLpdGrpStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf partial;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "up") return 2;
            if (name == "partial") return 3;
            if (name == "down") return 4;
            return -1;
        }
};

class RttMonReactVar : public ydk::Enum
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
        static const ydk::Enum::YLeaf iaJitterDS;
        static const ydk::Enum::YLeaf frameLossDS;
        static const ydk::Enum::YLeaf mosLQDS;
        static const ydk::Enum::YLeaf mosCQDS;
        static const ydk::Enum::YLeaf rFactorDS;
        static const ydk::Enum::YLeaf successivePacketLoss;
        static const ydk::Enum::YLeaf maxOfLatencyDS;
        static const ydk::Enum::YLeaf maxOfLatencySD;
        static const ydk::Enum::YLeaf latencyDSAvg;
        static const ydk::Enum::YLeaf latencySDAvg;
        static const ydk::Enum::YLeaf packetLoss;
        static const ydk::Enum::YLeaf iaJitterSD;
        static const ydk::Enum::YLeaf mosCQSD;
        static const ydk::Enum::YLeaf rFactorSD;

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
            if (name == "iaJitterDS") return 19;
            if (name == "frameLossDS") return 20;
            if (name == "mosLQDS") return 21;
            if (name == "mosCQDS") return 22;
            if (name == "rFactorDS") return 23;
            if (name == "successivePacketLoss") return 24;
            if (name == "maxOfLatencyDS") return 25;
            if (name == "maxOfLatencySD") return 26;
            if (name == "latencyDSAvg") return 27;
            if (name == "latencySDAvg") return 28;
            if (name == "packetLoss") return 29;
            if (name == "iaJitterSD") return 30;
            if (name == "mosCQSD") return 31;
            if (name == "rFactorSD") return 32;
            return -1;
        }
};

class RttReset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf reset;

        static int get_enum_value(const std::string & name) {
            if (name == "ready") return 1;
            if (name == "reset") return 2;
            return -1;
        }
};

class RttMplsVpnMonLpdFailureSense : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf noPath;
        static const ydk::Enum::YLeaf allPathsBroken;
        static const ydk::Enum::YLeaf allPathsUnexplorable;
        static const ydk::Enum::YLeaf allPathsBrokenOrUnexplorable;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf error;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "noPath") return 2;
            if (name == "allPathsBroken") return 3;
            if (name == "allPathsUnexplorable") return 4;
            if (name == "allPathsBrokenOrUnexplorable") return 5;
            if (name == "timeout") return 6;
            if (name == "error") return 7;
            return -1;
        }
};

class RttMonCodecType : public ydk::Enum
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

class RttMonOperation : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf httpGet;
        static const ydk::Enum::YLeaf httpRaw;
        static const ydk::Enum::YLeaf ftpGet;
        static const ydk::Enum::YLeaf ftpPassive;
        static const ydk::Enum::YLeaf ftpActive;
        static const ydk::Enum::YLeaf voipDTAlertRinging;
        static const ydk::Enum::YLeaf voipDTConnectOK;

        static int get_enum_value(const std::string & name) {
            if (name == "notApplicable") return 0;
            if (name == "httpGet") return 1;
            if (name == "httpRaw") return 2;
            if (name == "ftpGet") return 3;
            if (name == "ftpPassive") return 4;
            if (name == "ftpActive") return 5;
            if (name == "voipDTAlertRinging") return 6;
            if (name == "voipDTConnectOK") return 7;
            return -1;
        }
};

class RttMplsVpnMonRttType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf jitter;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf pathEcho;

        static int get_enum_value(const std::string & name) {
            if (name == "jitter") return 1;
            if (name == "echo") return 2;
            if (name == "pathEcho") return 3;
            return -1;
        }
};

class RttResponseSense : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf ok;
        static const ydk::Enum::YLeaf disconnected;
        static const ydk::Enum::YLeaf overThreshold;
        static const ydk::Enum::YLeaf timeout;
        static const ydk::Enum::YLeaf busy;
        static const ydk::Enum::YLeaf notConnected;
        static const ydk::Enum::YLeaf dropped;
        static const ydk::Enum::YLeaf sequenceError;
        static const ydk::Enum::YLeaf verifyError;
        static const ydk::Enum::YLeaf applicationSpecific;
        static const ydk::Enum::YLeaf dnsServerTimeout;
        static const ydk::Enum::YLeaf tcpConnectTimeout;
        static const ydk::Enum::YLeaf httpTransactionTimeout;
        static const ydk::Enum::YLeaf dnsQueryError;
        static const ydk::Enum::YLeaf httpError;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf mplsLspEchoTxError;
        static const ydk::Enum::YLeaf mplsLspUnreachable;
        static const ydk::Enum::YLeaf mplsLspMalformedReq;
        static const ydk::Enum::YLeaf mplsLspReachButNotFEC;
        static const ydk::Enum::YLeaf enableOk;
        static const ydk::Enum::YLeaf enableNoConnect;
        static const ydk::Enum::YLeaf enableVersionFail;
        static const ydk::Enum::YLeaf enableInternalError;
        static const ydk::Enum::YLeaf enableAbort;
        static const ydk::Enum::YLeaf enableFail;
        static const ydk::Enum::YLeaf enableAuthFail;
        static const ydk::Enum::YLeaf enableFormatError;
        static const ydk::Enum::YLeaf enablePortInUse;
        static const ydk::Enum::YLeaf statsRetrieveOk;
        static const ydk::Enum::YLeaf statsRetrieveNoConnect;
        static const ydk::Enum::YLeaf statsRetrieveVersionFail;
        static const ydk::Enum::YLeaf statsRetrieveInternalError;
        static const ydk::Enum::YLeaf statsRetrieveAbort;
        static const ydk::Enum::YLeaf statsRetrieveFail;
        static const ydk::Enum::YLeaf statsRetrieveAuthFail;
        static const ydk::Enum::YLeaf statsRetrieveFormatError;
        static const ydk::Enum::YLeaf statsRetrievePortInUse;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 0;
            if (name == "ok") return 1;
            if (name == "disconnected") return 2;
            if (name == "overThreshold") return 3;
            if (name == "timeout") return 4;
            if (name == "busy") return 5;
            if (name == "notConnected") return 6;
            if (name == "dropped") return 7;
            if (name == "sequenceError") return 8;
            if (name == "verifyError") return 9;
            if (name == "applicationSpecific") return 10;
            if (name == "dnsServerTimeout") return 11;
            if (name == "tcpConnectTimeout") return 12;
            if (name == "httpTransactionTimeout") return 13;
            if (name == "dnsQueryError") return 14;
            if (name == "httpError") return 15;
            if (name == "error") return 16;
            if (name == "mplsLspEchoTxError") return 17;
            if (name == "mplsLspUnreachable") return 18;
            if (name == "mplsLspMalformedReq") return 19;
            if (name == "mplsLspReachButNotFEC") return 20;
            if (name == "enableOk") return 21;
            if (name == "enableNoConnect") return 22;
            if (name == "enableVersionFail") return 23;
            if (name == "enableInternalError") return 24;
            if (name == "enableAbort") return 25;
            if (name == "enableFail") return 26;
            if (name == "enableAuthFail") return 27;
            if (name == "enableFormatError") return 28;
            if (name == "enablePortInUse") return 29;
            if (name == "statsRetrieveOk") return 30;
            if (name == "statsRetrieveNoConnect") return 31;
            if (name == "statsRetrieveVersionFail") return 32;
            if (name == "statsRetrieveInternalError") return 33;
            if (name == "statsRetrieveAbort") return 34;
            if (name == "statsRetrieveFail") return 35;
            if (name == "statsRetrieveAuthFail") return 36;
            if (name == "statsRetrieveFormatError") return 37;
            if (name == "statsRetrievePortInUse") return 38;
            return -1;
        }
};


}
}

#endif /* _CISCO_RTTMON_TC_MIB_ */

