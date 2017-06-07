
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RTTMON_TC_MIB.hpp"

namespace ydk {
namespace CISCO_RTTMON_TC_MIB {

const Enum::YLeaf RttmonrtttypeEnum::echo {1, "echo"};
const Enum::YLeaf RttmonrtttypeEnum::pathEcho {2, "pathEcho"};
const Enum::YLeaf RttmonrtttypeEnum::fileIO {3, "fileIO"};
const Enum::YLeaf RttmonrtttypeEnum::script {4, "script"};
const Enum::YLeaf RttmonrtttypeEnum::udpEcho {5, "udpEcho"};
const Enum::YLeaf RttmonrtttypeEnum::tcpConnect {6, "tcpConnect"};
const Enum::YLeaf RttmonrtttypeEnum::http {7, "http"};
const Enum::YLeaf RttmonrtttypeEnum::dns {8, "dns"};
const Enum::YLeaf RttmonrtttypeEnum::jitter {9, "jitter"};
const Enum::YLeaf RttmonrtttypeEnum::dlsw {10, "dlsw"};
const Enum::YLeaf RttmonrtttypeEnum::dhcp {11, "dhcp"};
const Enum::YLeaf RttmonrtttypeEnum::ftp {12, "ftp"};
const Enum::YLeaf RttmonrtttypeEnum::voip {13, "voip"};
const Enum::YLeaf RttmonrtttypeEnum::rtp {14, "rtp"};
const Enum::YLeaf RttmonrtttypeEnum::lspGroup {15, "lspGroup"};
const Enum::YLeaf RttmonrtttypeEnum::icmpjitter {16, "icmpjitter"};
const Enum::YLeaf RttmonrtttypeEnum::lspPing {17, "lspPing"};
const Enum::YLeaf RttmonrtttypeEnum::lspTrace {18, "lspTrace"};
const Enum::YLeaf RttmonrtttypeEnum::ethernetPing {19, "ethernetPing"};
const Enum::YLeaf RttmonrtttypeEnum::ethernetJitter {20, "ethernetJitter"};
const Enum::YLeaf RttmonrtttypeEnum::lspPingPseudowire {21, "lspPingPseudowire"};
const Enum::YLeaf RttmonrtttypeEnum::video {22, "video"};
const Enum::YLeaf RttmonrtttypeEnum::y1731Delay {23, "y1731Delay"};
const Enum::YLeaf RttmonrtttypeEnum::y1731Loss {24, "y1731Loss"};
const Enum::YLeaf RttmonrtttypeEnum::mcastJitter {25, "mcastJitter"};

const Enum::YLeaf RttmonlsppingreplymodeEnum::replyIpv4Udp {1, "replyIpv4Udp"};
const Enum::YLeaf RttmonlsppingreplymodeEnum::replyIpv4UdpRA {2, "replyIpv4UdpRA"};

const Enum::YLeaf RttmonprotocolEnum::notApplicable {1, "notApplicable"};
const Enum::YLeaf RttmonprotocolEnum::ipIcmpEcho {2, "ipIcmpEcho"};
const Enum::YLeaf RttmonprotocolEnum::ipUdpEchoAppl {3, "ipUdpEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::snaRUEcho {4, "snaRUEcho"};
const Enum::YLeaf RttmonprotocolEnum::snaLU0EchoAppl {5, "snaLU0EchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::snaLU2EchoAppl {6, "snaLU2EchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::snaLU62Echo {7, "snaLU62Echo"};
const Enum::YLeaf RttmonprotocolEnum::snaLU62EchoAppl {8, "snaLU62EchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::appleTalkEcho {9, "appleTalkEcho"};
const Enum::YLeaf RttmonprotocolEnum::appleTalkEchoAppl {10, "appleTalkEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::decNetEcho {11, "decNetEcho"};
const Enum::YLeaf RttmonprotocolEnum::decNetEchoAppl {12, "decNetEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::ipxEcho {13, "ipxEcho"};
const Enum::YLeaf RttmonprotocolEnum::ipxEchoAppl {14, "ipxEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::isoClnsEcho {15, "isoClnsEcho"};
const Enum::YLeaf RttmonprotocolEnum::isoClnsEchoAppl {16, "isoClnsEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::vinesEcho {17, "vinesEcho"};
const Enum::YLeaf RttmonprotocolEnum::vinesEchoAppl {18, "vinesEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::xnsEcho {19, "xnsEcho"};
const Enum::YLeaf RttmonprotocolEnum::xnsEchoAppl {20, "xnsEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::apolloEcho {21, "apolloEcho"};
const Enum::YLeaf RttmonprotocolEnum::apolloEchoAppl {22, "apolloEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::netbiosEchoAppl {23, "netbiosEchoAppl"};
const Enum::YLeaf RttmonprotocolEnum::ipTcpConn {24, "ipTcpConn"};
const Enum::YLeaf RttmonprotocolEnum::httpAppl {25, "httpAppl"};
const Enum::YLeaf RttmonprotocolEnum::dnsAppl {26, "dnsAppl"};
const Enum::YLeaf RttmonprotocolEnum::jitterAppl {27, "jitterAppl"};
const Enum::YLeaf RttmonprotocolEnum::dlswAppl {28, "dlswAppl"};
const Enum::YLeaf RttmonprotocolEnum::dhcpAppl {29, "dhcpAppl"};
const Enum::YLeaf RttmonprotocolEnum::ftpAppl {30, "ftpAppl"};
const Enum::YLeaf RttmonprotocolEnum::mplsLspPingAppl {31, "mplsLspPingAppl"};
const Enum::YLeaf RttmonprotocolEnum::voipAppl {32, "voipAppl"};
const Enum::YLeaf RttmonprotocolEnum::rtpAppl {33, "rtpAppl"};
const Enum::YLeaf RttmonprotocolEnum::icmpJitterAppl {34, "icmpJitterAppl"};
const Enum::YLeaf RttmonprotocolEnum::ethernetPingAppl {35, "ethernetPingAppl"};
const Enum::YLeaf RttmonprotocolEnum::ethernetJitterAppl {36, "ethernetJitterAppl"};
const Enum::YLeaf RttmonprotocolEnum::videoAppl {37, "videoAppl"};
const Enum::YLeaf RttmonprotocolEnum::y1731dmm {38, "y1731dmm"};
const Enum::YLeaf RttmonprotocolEnum::y17311dm {39, "y17311dm"};
const Enum::YLeaf RttmonprotocolEnum::y1731lmm {40, "y1731lmm"};
const Enum::YLeaf RttmonprotocolEnum::mcastJitterAppl {41, "mcastJitterAppl"};
const Enum::YLeaf RttmonprotocolEnum::y1731slm {42, "y1731slm"};

const Enum::YLeaf RttmplsvpnmonlpdgrpstatusEnum::unknown {1, "unknown"};
const Enum::YLeaf RttmplsvpnmonlpdgrpstatusEnum::up {2, "up"};
const Enum::YLeaf RttmplsvpnmonlpdgrpstatusEnum::partial {3, "partial"};
const Enum::YLeaf RttmplsvpnmonlpdgrpstatusEnum::down {4, "down"};

const Enum::YLeaf RttmonreactvarEnum::rtt {1, "rtt"};
const Enum::YLeaf RttmonreactvarEnum::jitterSDAvg {2, "jitterSDAvg"};
const Enum::YLeaf RttmonreactvarEnum::jitterDSAvg {3, "jitterDSAvg"};
const Enum::YLeaf RttmonreactvarEnum::packetLossSD {4, "packetLossSD"};
const Enum::YLeaf RttmonreactvarEnum::packetLossDS {5, "packetLossDS"};
const Enum::YLeaf RttmonreactvarEnum::mos {6, "mos"};
const Enum::YLeaf RttmonreactvarEnum::timeout {7, "timeout"};
const Enum::YLeaf RttmonreactvarEnum::connectionLoss {8, "connectionLoss"};
const Enum::YLeaf RttmonreactvarEnum::verifyError {9, "verifyError"};
const Enum::YLeaf RttmonreactvarEnum::jitterAvg {10, "jitterAvg"};
const Enum::YLeaf RttmonreactvarEnum::icpif {11, "icpif"};
const Enum::YLeaf RttmonreactvarEnum::packetMIA {12, "packetMIA"};
const Enum::YLeaf RttmonreactvarEnum::packetLateArrival {13, "packetLateArrival"};
const Enum::YLeaf RttmonreactvarEnum::packetOutOfSequence {14, "packetOutOfSequence"};
const Enum::YLeaf RttmonreactvarEnum::maxOfPositiveSD {15, "maxOfPositiveSD"};
const Enum::YLeaf RttmonreactvarEnum::maxOfNegativeSD {16, "maxOfNegativeSD"};
const Enum::YLeaf RttmonreactvarEnum::maxOfPositiveDS {17, "maxOfPositiveDS"};
const Enum::YLeaf RttmonreactvarEnum::maxOfNegativeDS {18, "maxOfNegativeDS"};
const Enum::YLeaf RttmonreactvarEnum::iaJitterDS {19, "iaJitterDS"};
const Enum::YLeaf RttmonreactvarEnum::frameLossDS {20, "frameLossDS"};
const Enum::YLeaf RttmonreactvarEnum::mosLQDS {21, "mosLQDS"};
const Enum::YLeaf RttmonreactvarEnum::mosCQDS {22, "mosCQDS"};
const Enum::YLeaf RttmonreactvarEnum::rFactorDS {23, "rFactorDS"};
const Enum::YLeaf RttmonreactvarEnum::successivePacketLoss {24, "successivePacketLoss"};
const Enum::YLeaf RttmonreactvarEnum::maxOfLatencyDS {25, "maxOfLatencyDS"};
const Enum::YLeaf RttmonreactvarEnum::maxOfLatencySD {26, "maxOfLatencySD"};
const Enum::YLeaf RttmonreactvarEnum::latencyDSAvg {27, "latencyDSAvg"};
const Enum::YLeaf RttmonreactvarEnum::latencySDAvg {28, "latencySDAvg"};
const Enum::YLeaf RttmonreactvarEnum::packetLoss {29, "packetLoss"};
const Enum::YLeaf RttmonreactvarEnum::iaJitterSD {30, "iaJitterSD"};
const Enum::YLeaf RttmonreactvarEnum::mosCQSD {31, "mosCQSD"};
const Enum::YLeaf RttmonreactvarEnum::rFactorSD {32, "rFactorSD"};

const Enum::YLeaf RttresetEnum::ready {1, "ready"};
const Enum::YLeaf RttresetEnum::reset {2, "reset"};

const Enum::YLeaf RttmplsvpnmonlpdfailuresenseEnum::unknown {1, "unknown"};
const Enum::YLeaf RttmplsvpnmonlpdfailuresenseEnum::noPath {2, "noPath"};
const Enum::YLeaf RttmplsvpnmonlpdfailuresenseEnum::allPathsBroken {3, "allPathsBroken"};
const Enum::YLeaf RttmplsvpnmonlpdfailuresenseEnum::allPathsUnexplorable {4, "allPathsUnexplorable"};
const Enum::YLeaf RttmplsvpnmonlpdfailuresenseEnum::allPathsBrokenOrUnexplorable {5, "allPathsBrokenOrUnexplorable"};
const Enum::YLeaf RttmplsvpnmonlpdfailuresenseEnum::timeout {6, "timeout"};
const Enum::YLeaf RttmplsvpnmonlpdfailuresenseEnum::error {7, "error"};

const Enum::YLeaf RttmoncodectypeEnum::notApplicable {0, "notApplicable"};
const Enum::YLeaf RttmoncodectypeEnum::g711ulaw {1, "g711ulaw"};
const Enum::YLeaf RttmoncodectypeEnum::g711alaw {2, "g711alaw"};
const Enum::YLeaf RttmoncodectypeEnum::g729a {3, "g729a"};

const Enum::YLeaf RttmonoperationEnum::notApplicable {0, "notApplicable"};
const Enum::YLeaf RttmonoperationEnum::httpGet {1, "httpGet"};
const Enum::YLeaf RttmonoperationEnum::httpRaw {2, "httpRaw"};
const Enum::YLeaf RttmonoperationEnum::ftpGet {3, "ftpGet"};
const Enum::YLeaf RttmonoperationEnum::ftpPassive {4, "ftpPassive"};
const Enum::YLeaf RttmonoperationEnum::ftpActive {5, "ftpActive"};
const Enum::YLeaf RttmonoperationEnum::voipDTAlertRinging {6, "voipDTAlertRinging"};
const Enum::YLeaf RttmonoperationEnum::voipDTConnectOK {7, "voipDTConnectOK"};

const Enum::YLeaf RttmplsvpnmonrtttypeEnum::jitter {1, "jitter"};
const Enum::YLeaf RttmplsvpnmonrtttypeEnum::echo {2, "echo"};
const Enum::YLeaf RttmplsvpnmonrtttypeEnum::pathEcho {3, "pathEcho"};

const Enum::YLeaf RttresponsesenseEnum::other {0, "other"};
const Enum::YLeaf RttresponsesenseEnum::ok {1, "ok"};
const Enum::YLeaf RttresponsesenseEnum::disconnected {2, "disconnected"};
const Enum::YLeaf RttresponsesenseEnum::overThreshold {3, "overThreshold"};
const Enum::YLeaf RttresponsesenseEnum::timeout {4, "timeout"};
const Enum::YLeaf RttresponsesenseEnum::busy {5, "busy"};
const Enum::YLeaf RttresponsesenseEnum::notConnected {6, "notConnected"};
const Enum::YLeaf RttresponsesenseEnum::dropped {7, "dropped"};
const Enum::YLeaf RttresponsesenseEnum::sequenceError {8, "sequenceError"};
const Enum::YLeaf RttresponsesenseEnum::verifyError {9, "verifyError"};
const Enum::YLeaf RttresponsesenseEnum::applicationSpecific {10, "applicationSpecific"};
const Enum::YLeaf RttresponsesenseEnum::dnsServerTimeout {11, "dnsServerTimeout"};
const Enum::YLeaf RttresponsesenseEnum::tcpConnectTimeout {12, "tcpConnectTimeout"};
const Enum::YLeaf RttresponsesenseEnum::httpTransactionTimeout {13, "httpTransactionTimeout"};
const Enum::YLeaf RttresponsesenseEnum::dnsQueryError {14, "dnsQueryError"};
const Enum::YLeaf RttresponsesenseEnum::httpError {15, "httpError"};
const Enum::YLeaf RttresponsesenseEnum::error {16, "error"};
const Enum::YLeaf RttresponsesenseEnum::mplsLspEchoTxError {17, "mplsLspEchoTxError"};
const Enum::YLeaf RttresponsesenseEnum::mplsLspUnreachable {18, "mplsLspUnreachable"};
const Enum::YLeaf RttresponsesenseEnum::mplsLspMalformedReq {19, "mplsLspMalformedReq"};
const Enum::YLeaf RttresponsesenseEnum::mplsLspReachButNotFEC {20, "mplsLspReachButNotFEC"};
const Enum::YLeaf RttresponsesenseEnum::enableOk {21, "enableOk"};
const Enum::YLeaf RttresponsesenseEnum::enableNoConnect {22, "enableNoConnect"};
const Enum::YLeaf RttresponsesenseEnum::enableVersionFail {23, "enableVersionFail"};
const Enum::YLeaf RttresponsesenseEnum::enableInternalError {24, "enableInternalError"};
const Enum::YLeaf RttresponsesenseEnum::enableAbort {25, "enableAbort"};
const Enum::YLeaf RttresponsesenseEnum::enableFail {26, "enableFail"};
const Enum::YLeaf RttresponsesenseEnum::enableAuthFail {27, "enableAuthFail"};
const Enum::YLeaf RttresponsesenseEnum::enableFormatError {28, "enableFormatError"};
const Enum::YLeaf RttresponsesenseEnum::enablePortInUse {29, "enablePortInUse"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveOk {30, "statsRetrieveOk"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveNoConnect {31, "statsRetrieveNoConnect"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveVersionFail {32, "statsRetrieveVersionFail"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveInternalError {33, "statsRetrieveInternalError"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveAbort {34, "statsRetrieveAbort"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveFail {35, "statsRetrieveFail"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveAuthFail {36, "statsRetrieveAuthFail"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrieveFormatError {37, "statsRetrieveFormatError"};
const Enum::YLeaf RttresponsesenseEnum::statsRetrievePortInUse {38, "statsRetrievePortInUse"};


}
}

