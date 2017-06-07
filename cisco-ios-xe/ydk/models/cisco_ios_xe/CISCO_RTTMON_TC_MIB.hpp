#ifndef _CISCO_RTTMON_TC_MIB_
#define _CISCO_RTTMON_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_RTTMON_TC_MIB {

class RttmonrtttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf echo;
        static const Enum::YLeaf pathEcho;
        static const Enum::YLeaf fileIO;
        static const Enum::YLeaf script;
        static const Enum::YLeaf udpEcho;
        static const Enum::YLeaf tcpConnect;
        static const Enum::YLeaf http;
        static const Enum::YLeaf dns;
        static const Enum::YLeaf jitter;
        static const Enum::YLeaf dlsw;
        static const Enum::YLeaf dhcp;
        static const Enum::YLeaf ftp;
        static const Enum::YLeaf voip;
        static const Enum::YLeaf rtp;
        static const Enum::YLeaf lspGroup;
        static const Enum::YLeaf icmpjitter;
        static const Enum::YLeaf lspPing;
        static const Enum::YLeaf lspTrace;
        static const Enum::YLeaf ethernetPing;
        static const Enum::YLeaf ethernetJitter;
        static const Enum::YLeaf lspPingPseudowire;
        static const Enum::YLeaf video;
        static const Enum::YLeaf y1731Delay;
        static const Enum::YLeaf y1731Loss;
        static const Enum::YLeaf mcastJitter;

};

class RttmonlsppingreplymodeEnum : public Enum
{
    public:
        static const Enum::YLeaf replyIpv4Udp;
        static const Enum::YLeaf replyIpv4UdpRA;

};

class RttmonprotocolEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf ipIcmpEcho;
        static const Enum::YLeaf ipUdpEchoAppl;
        static const Enum::YLeaf snaRUEcho;
        static const Enum::YLeaf snaLU0EchoAppl;
        static const Enum::YLeaf snaLU2EchoAppl;
        static const Enum::YLeaf snaLU62Echo;
        static const Enum::YLeaf snaLU62EchoAppl;
        static const Enum::YLeaf appleTalkEcho;
        static const Enum::YLeaf appleTalkEchoAppl;
        static const Enum::YLeaf decNetEcho;
        static const Enum::YLeaf decNetEchoAppl;
        static const Enum::YLeaf ipxEcho;
        static const Enum::YLeaf ipxEchoAppl;
        static const Enum::YLeaf isoClnsEcho;
        static const Enum::YLeaf isoClnsEchoAppl;
        static const Enum::YLeaf vinesEcho;
        static const Enum::YLeaf vinesEchoAppl;
        static const Enum::YLeaf xnsEcho;
        static const Enum::YLeaf xnsEchoAppl;
        static const Enum::YLeaf apolloEcho;
        static const Enum::YLeaf apolloEchoAppl;
        static const Enum::YLeaf netbiosEchoAppl;
        static const Enum::YLeaf ipTcpConn;
        static const Enum::YLeaf httpAppl;
        static const Enum::YLeaf dnsAppl;
        static const Enum::YLeaf jitterAppl;
        static const Enum::YLeaf dlswAppl;
        static const Enum::YLeaf dhcpAppl;
        static const Enum::YLeaf ftpAppl;
        static const Enum::YLeaf mplsLspPingAppl;
        static const Enum::YLeaf voipAppl;
        static const Enum::YLeaf rtpAppl;
        static const Enum::YLeaf icmpJitterAppl;
        static const Enum::YLeaf ethernetPingAppl;
        static const Enum::YLeaf ethernetJitterAppl;
        static const Enum::YLeaf videoAppl;
        static const Enum::YLeaf y1731dmm;
        static const Enum::YLeaf y17311dm;
        static const Enum::YLeaf y1731lmm;
        static const Enum::YLeaf mcastJitterAppl;
        static const Enum::YLeaf y1731slm;

};

class RttmplsvpnmonlpdgrpstatusEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf up;
        static const Enum::YLeaf partial;
        static const Enum::YLeaf down;

};

class RttmonreactvarEnum : public Enum
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
        static const Enum::YLeaf iaJitterDS;
        static const Enum::YLeaf frameLossDS;
        static const Enum::YLeaf mosLQDS;
        static const Enum::YLeaf mosCQDS;
        static const Enum::YLeaf rFactorDS;
        static const Enum::YLeaf successivePacketLoss;
        static const Enum::YLeaf maxOfLatencyDS;
        static const Enum::YLeaf maxOfLatencySD;
        static const Enum::YLeaf latencyDSAvg;
        static const Enum::YLeaf latencySDAvg;
        static const Enum::YLeaf packetLoss;
        static const Enum::YLeaf iaJitterSD;
        static const Enum::YLeaf mosCQSD;
        static const Enum::YLeaf rFactorSD;

};

class RttresetEnum : public Enum
{
    public:
        static const Enum::YLeaf ready;
        static const Enum::YLeaf reset;

};

class RttmplsvpnmonlpdfailuresenseEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf noPath;
        static const Enum::YLeaf allPathsBroken;
        static const Enum::YLeaf allPathsUnexplorable;
        static const Enum::YLeaf allPathsBrokenOrUnexplorable;
        static const Enum::YLeaf timeout;
        static const Enum::YLeaf error;

};

class RttmoncodectypeEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf g711ulaw;
        static const Enum::YLeaf g711alaw;
        static const Enum::YLeaf g729a;

};

class RttmonoperationEnum : public Enum
{
    public:
        static const Enum::YLeaf notApplicable;
        static const Enum::YLeaf httpGet;
        static const Enum::YLeaf httpRaw;
        static const Enum::YLeaf ftpGet;
        static const Enum::YLeaf ftpPassive;
        static const Enum::YLeaf ftpActive;
        static const Enum::YLeaf voipDTAlertRinging;
        static const Enum::YLeaf voipDTConnectOK;

};

class RttmplsvpnmonrtttypeEnum : public Enum
{
    public:
        static const Enum::YLeaf jitter;
        static const Enum::YLeaf echo;
        static const Enum::YLeaf pathEcho;

};

class RttresponsesenseEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf ok;
        static const Enum::YLeaf disconnected;
        static const Enum::YLeaf overThreshold;
        static const Enum::YLeaf timeout;
        static const Enum::YLeaf busy;
        static const Enum::YLeaf notConnected;
        static const Enum::YLeaf dropped;
        static const Enum::YLeaf sequenceError;
        static const Enum::YLeaf verifyError;
        static const Enum::YLeaf applicationSpecific;
        static const Enum::YLeaf dnsServerTimeout;
        static const Enum::YLeaf tcpConnectTimeout;
        static const Enum::YLeaf httpTransactionTimeout;
        static const Enum::YLeaf dnsQueryError;
        static const Enum::YLeaf httpError;
        static const Enum::YLeaf error;
        static const Enum::YLeaf mplsLspEchoTxError;
        static const Enum::YLeaf mplsLspUnreachable;
        static const Enum::YLeaf mplsLspMalformedReq;
        static const Enum::YLeaf mplsLspReachButNotFEC;
        static const Enum::YLeaf enableOk;
        static const Enum::YLeaf enableNoConnect;
        static const Enum::YLeaf enableVersionFail;
        static const Enum::YLeaf enableInternalError;
        static const Enum::YLeaf enableAbort;
        static const Enum::YLeaf enableFail;
        static const Enum::YLeaf enableAuthFail;
        static const Enum::YLeaf enableFormatError;
        static const Enum::YLeaf enablePortInUse;
        static const Enum::YLeaf statsRetrieveOk;
        static const Enum::YLeaf statsRetrieveNoConnect;
        static const Enum::YLeaf statsRetrieveVersionFail;
        static const Enum::YLeaf statsRetrieveInternalError;
        static const Enum::YLeaf statsRetrieveAbort;
        static const Enum::YLeaf statsRetrieveFail;
        static const Enum::YLeaf statsRetrieveAuthFail;
        static const Enum::YLeaf statsRetrieveFormatError;
        static const Enum::YLeaf statsRetrievePortInUse;

};


}
}

#endif /* _CISCO_RTTMON_TC_MIB_ */

