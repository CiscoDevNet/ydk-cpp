#ifndef _CISCO_RTTMON_TC_MIB_
#define _CISCO_RTTMON_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_RTTMON_TC_MIB {

class RttMonLSPPingReplyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf replyIpv4Udp;
        static const ydk::Enum::YLeaf replyIpv4UdpRA;

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

};

class RttMplsVpnMonLpdGrpStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf partial;
        static const ydk::Enum::YLeaf down;

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

};

class RttReset : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf reset;

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

};

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

};

class RttMonCodecType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf notApplicable;
        static const ydk::Enum::YLeaf g711ulaw;
        static const ydk::Enum::YLeaf g711alaw;
        static const ydk::Enum::YLeaf g729a;

};

class RttMplsVpnMonRttType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf jitter;
        static const ydk::Enum::YLeaf echo;
        static const ydk::Enum::YLeaf pathEcho;

};


}
}

#endif /* _CISCO_RTTMON_TC_MIB_ */

