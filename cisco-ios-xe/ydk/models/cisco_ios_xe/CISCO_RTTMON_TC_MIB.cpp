
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RTTMON_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_RTTMON_TC_MIB {

const Enum::YLeaf Rttmplsvpnmonlpdgrpstatus::unknown {1, "unknown"};
const Enum::YLeaf Rttmplsvpnmonlpdgrpstatus::up {2, "up"};
const Enum::YLeaf Rttmplsvpnmonlpdgrpstatus::partial {3, "partial"};
const Enum::YLeaf Rttmplsvpnmonlpdgrpstatus::down {4, "down"};

const Enum::YLeaf Rttmonlsppingreplymode::replyIpv4Udp {1, "replyIpv4Udp"};
const Enum::YLeaf Rttmonlsppingreplymode::replyIpv4UdpRA {2, "replyIpv4UdpRA"};

const Enum::YLeaf Rttmonprotocol::none {0, "none"};
const Enum::YLeaf Rttmonprotocol::notApplicable {1, "notApplicable"};
const Enum::YLeaf Rttmonprotocol::ipIcmpEcho {2, "ipIcmpEcho"};
const Enum::YLeaf Rttmonprotocol::ipUdpEchoAppl {3, "ipUdpEchoAppl"};
const Enum::YLeaf Rttmonprotocol::snaRUEcho {4, "snaRUEcho"};
const Enum::YLeaf Rttmonprotocol::snaLU0EchoAppl {5, "snaLU0EchoAppl"};
const Enum::YLeaf Rttmonprotocol::snaLU2EchoAppl {6, "snaLU2EchoAppl"};
const Enum::YLeaf Rttmonprotocol::snaLU62Echo {7, "snaLU62Echo"};
const Enum::YLeaf Rttmonprotocol::snaLU62EchoAppl {8, "snaLU62EchoAppl"};
const Enum::YLeaf Rttmonprotocol::appleTalkEcho {9, "appleTalkEcho"};
const Enum::YLeaf Rttmonprotocol::appleTalkEchoAppl {10, "appleTalkEchoAppl"};
const Enum::YLeaf Rttmonprotocol::decNetEcho {11, "decNetEcho"};
const Enum::YLeaf Rttmonprotocol::decNetEchoAppl {12, "decNetEchoAppl"};
const Enum::YLeaf Rttmonprotocol::ipxEcho {13, "ipxEcho"};
const Enum::YLeaf Rttmonprotocol::ipxEchoAppl {14, "ipxEchoAppl"};
const Enum::YLeaf Rttmonprotocol::isoClnsEcho {15, "isoClnsEcho"};
const Enum::YLeaf Rttmonprotocol::isoClnsEchoAppl {16, "isoClnsEchoAppl"};
const Enum::YLeaf Rttmonprotocol::vinesEcho {17, "vinesEcho"};
const Enum::YLeaf Rttmonprotocol::vinesEchoAppl {18, "vinesEchoAppl"};
const Enum::YLeaf Rttmonprotocol::xnsEcho {19, "xnsEcho"};
const Enum::YLeaf Rttmonprotocol::xnsEchoAppl {20, "xnsEchoAppl"};
const Enum::YLeaf Rttmonprotocol::apolloEcho {21, "apolloEcho"};
const Enum::YLeaf Rttmonprotocol::apolloEchoAppl {22, "apolloEchoAppl"};
const Enum::YLeaf Rttmonprotocol::netbiosEchoAppl {23, "netbiosEchoAppl"};
const Enum::YLeaf Rttmonprotocol::ipTcpConn {24, "ipTcpConn"};
const Enum::YLeaf Rttmonprotocol::httpAppl {25, "httpAppl"};
const Enum::YLeaf Rttmonprotocol::dnsAppl {26, "dnsAppl"};
const Enum::YLeaf Rttmonprotocol::jitterAppl {27, "jitterAppl"};
const Enum::YLeaf Rttmonprotocol::dlswAppl {28, "dlswAppl"};
const Enum::YLeaf Rttmonprotocol::dhcpAppl {29, "dhcpAppl"};
const Enum::YLeaf Rttmonprotocol::ftpAppl {30, "ftpAppl"};
const Enum::YLeaf Rttmonprotocol::mplsLspPingAppl {31, "mplsLspPingAppl"};
const Enum::YLeaf Rttmonprotocol::voipAppl {32, "voipAppl"};
const Enum::YLeaf Rttmonprotocol::rtpAppl {33, "rtpAppl"};
const Enum::YLeaf Rttmonprotocol::icmpJitterAppl {34, "icmpJitterAppl"};
const Enum::YLeaf Rttmonprotocol::ethernetPingAppl {35, "ethernetPingAppl"};
const Enum::YLeaf Rttmonprotocol::ethernetJitterAppl {36, "ethernetJitterAppl"};
const Enum::YLeaf Rttmonprotocol::videoAppl {37, "videoAppl"};
const Enum::YLeaf Rttmonprotocol::y1731dmm {38, "y1731dmm"};
const Enum::YLeaf Rttmonprotocol::y17311dm {39, "y17311dm"};
const Enum::YLeaf Rttmonprotocol::y1731lmm {40, "y1731lmm"};
const Enum::YLeaf Rttmonprotocol::mcastJitterAppl {41, "mcastJitterAppl"};
const Enum::YLeaf Rttmonprotocol::y1731slm {42, "y1731slm"};
const Enum::YLeaf Rttmonprotocol::y1731dmmv1 {43, "y1731dmmv1"};

const Enum::YLeaf Rttreset::ready {1, "ready"};
const Enum::YLeaf Rttreset::reset {2, "reset"};

const Enum::YLeaf Rttmplsvpnmonlpdfailuresense::unknown {1, "unknown"};
const Enum::YLeaf Rttmplsvpnmonlpdfailuresense::noPath {2, "noPath"};
const Enum::YLeaf Rttmplsvpnmonlpdfailuresense::allPathsBroken {3, "allPathsBroken"};
const Enum::YLeaf Rttmplsvpnmonlpdfailuresense::allPathsUnexplorable {4, "allPathsUnexplorable"};
const Enum::YLeaf Rttmplsvpnmonlpdfailuresense::allPathsBrokenOrUnexplorable {5, "allPathsBrokenOrUnexplorable"};
const Enum::YLeaf Rttmplsvpnmonlpdfailuresense::timeout {6, "timeout"};
const Enum::YLeaf Rttmplsvpnmonlpdfailuresense::error {7, "error"};

const Enum::YLeaf Rttmonrtttype::none {0, "none"};
const Enum::YLeaf Rttmonrtttype::echo {1, "echo"};
const Enum::YLeaf Rttmonrtttype::pathEcho {2, "pathEcho"};
const Enum::YLeaf Rttmonrtttype::fileIO {3, "fileIO"};
const Enum::YLeaf Rttmonrtttype::script {4, "script"};
const Enum::YLeaf Rttmonrtttype::udpEcho {5, "udpEcho"};
const Enum::YLeaf Rttmonrtttype::tcpConnect {6, "tcpConnect"};
const Enum::YLeaf Rttmonrtttype::http {7, "http"};
const Enum::YLeaf Rttmonrtttype::dns {8, "dns"};
const Enum::YLeaf Rttmonrtttype::jitter {9, "jitter"};
const Enum::YLeaf Rttmonrtttype::dlsw {10, "dlsw"};
const Enum::YLeaf Rttmonrtttype::dhcp {11, "dhcp"};
const Enum::YLeaf Rttmonrtttype::ftp {12, "ftp"};
const Enum::YLeaf Rttmonrtttype::voip {13, "voip"};
const Enum::YLeaf Rttmonrtttype::rtp {14, "rtp"};
const Enum::YLeaf Rttmonrtttype::lspGroup {15, "lspGroup"};
const Enum::YLeaf Rttmonrtttype::icmpjitter {16, "icmpjitter"};
const Enum::YLeaf Rttmonrtttype::lspPing {17, "lspPing"};
const Enum::YLeaf Rttmonrtttype::lspTrace {18, "lspTrace"};
const Enum::YLeaf Rttmonrtttype::ethernetPing {19, "ethernetPing"};
const Enum::YLeaf Rttmonrtttype::ethernetJitter {20, "ethernetJitter"};
const Enum::YLeaf Rttmonrtttype::lspPingPseudowire {21, "lspPingPseudowire"};
const Enum::YLeaf Rttmonrtttype::video {22, "video"};
const Enum::YLeaf Rttmonrtttype::y1731Delay {23, "y1731Delay"};
const Enum::YLeaf Rttmonrtttype::y1731Loss {24, "y1731Loss"};
const Enum::YLeaf Rttmonrtttype::mcastJitter {25, "mcastJitter"};

const Enum::YLeaf Rttmplsvpnmonrtttype::jitter {1, "jitter"};
const Enum::YLeaf Rttmplsvpnmonrtttype::echo {2, "echo"};
const Enum::YLeaf Rttmplsvpnmonrtttype::pathEcho {3, "pathEcho"};

const Enum::YLeaf Rttmoncodectype::notApplicable {0, "notApplicable"};
const Enum::YLeaf Rttmoncodectype::g711ulaw {1, "g711ulaw"};
const Enum::YLeaf Rttmoncodectype::g711alaw {2, "g711alaw"};
const Enum::YLeaf Rttmoncodectype::g729a {3, "g729a"};

const Enum::YLeaf Rttmonoperation::notApplicable {0, "notApplicable"};
const Enum::YLeaf Rttmonoperation::httpGet {1, "httpGet"};
const Enum::YLeaf Rttmonoperation::httpRaw {2, "httpRaw"};
const Enum::YLeaf Rttmonoperation::ftpGet {3, "ftpGet"};
const Enum::YLeaf Rttmonoperation::ftpPassive {4, "ftpPassive"};
const Enum::YLeaf Rttmonoperation::ftpActive {5, "ftpActive"};
const Enum::YLeaf Rttmonoperation::voipDTAlertRinging {6, "voipDTAlertRinging"};
const Enum::YLeaf Rttmonoperation::voipDTConnectOK {7, "voipDTConnectOK"};

const Enum::YLeaf Rttmonreactvar::rtt {1, "rtt"};
const Enum::YLeaf Rttmonreactvar::jitterSDAvg {2, "jitterSDAvg"};
const Enum::YLeaf Rttmonreactvar::jitterDSAvg {3, "jitterDSAvg"};
const Enum::YLeaf Rttmonreactvar::packetLossSD {4, "packetLossSD"};
const Enum::YLeaf Rttmonreactvar::packetLossDS {5, "packetLossDS"};
const Enum::YLeaf Rttmonreactvar::mos {6, "mos"};
const Enum::YLeaf Rttmonreactvar::timeout {7, "timeout"};
const Enum::YLeaf Rttmonreactvar::connectionLoss {8, "connectionLoss"};
const Enum::YLeaf Rttmonreactvar::verifyError {9, "verifyError"};
const Enum::YLeaf Rttmonreactvar::jitterAvg {10, "jitterAvg"};
const Enum::YLeaf Rttmonreactvar::icpif {11, "icpif"};
const Enum::YLeaf Rttmonreactvar::packetMIA {12, "packetMIA"};
const Enum::YLeaf Rttmonreactvar::packetLateArrival {13, "packetLateArrival"};
const Enum::YLeaf Rttmonreactvar::packetOutOfSequence {14, "packetOutOfSequence"};
const Enum::YLeaf Rttmonreactvar::maxOfPositiveSD {15, "maxOfPositiveSD"};
const Enum::YLeaf Rttmonreactvar::maxOfNegativeSD {16, "maxOfNegativeSD"};
const Enum::YLeaf Rttmonreactvar::maxOfPositiveDS {17, "maxOfPositiveDS"};
const Enum::YLeaf Rttmonreactvar::maxOfNegativeDS {18, "maxOfNegativeDS"};
const Enum::YLeaf Rttmonreactvar::iaJitterDS {19, "iaJitterDS"};
const Enum::YLeaf Rttmonreactvar::frameLossDS {20, "frameLossDS"};
const Enum::YLeaf Rttmonreactvar::mosLQDS {21, "mosLQDS"};
const Enum::YLeaf Rttmonreactvar::mosCQDS {22, "mosCQDS"};
const Enum::YLeaf Rttmonreactvar::rFactorDS {23, "rFactorDS"};
const Enum::YLeaf Rttmonreactvar::successivePacketLoss {24, "successivePacketLoss"};
const Enum::YLeaf Rttmonreactvar::maxOfLatencyDS {25, "maxOfLatencyDS"};
const Enum::YLeaf Rttmonreactvar::maxOfLatencySD {26, "maxOfLatencySD"};
const Enum::YLeaf Rttmonreactvar::latencyDSAvg {27, "latencyDSAvg"};
const Enum::YLeaf Rttmonreactvar::latencySDAvg {28, "latencySDAvg"};
const Enum::YLeaf Rttmonreactvar::packetLoss {29, "packetLoss"};
const Enum::YLeaf Rttmonreactvar::iaJitterSD {30, "iaJitterSD"};
const Enum::YLeaf Rttmonreactvar::mosCQSD {31, "mosCQSD"};
const Enum::YLeaf Rttmonreactvar::rFactorSD {32, "rFactorSD"};

const Enum::YLeaf Rttresponsesense::other {0, "other"};
const Enum::YLeaf Rttresponsesense::ok {1, "ok"};
const Enum::YLeaf Rttresponsesense::disconnected {2, "disconnected"};
const Enum::YLeaf Rttresponsesense::overThreshold {3, "overThreshold"};
const Enum::YLeaf Rttresponsesense::timeout {4, "timeout"};
const Enum::YLeaf Rttresponsesense::busy {5, "busy"};
const Enum::YLeaf Rttresponsesense::notConnected {6, "notConnected"};
const Enum::YLeaf Rttresponsesense::dropped {7, "dropped"};
const Enum::YLeaf Rttresponsesense::sequenceError {8, "sequenceError"};
const Enum::YLeaf Rttresponsesense::verifyError {9, "verifyError"};
const Enum::YLeaf Rttresponsesense::applicationSpecific {10, "applicationSpecific"};
const Enum::YLeaf Rttresponsesense::dnsServerTimeout {11, "dnsServerTimeout"};
const Enum::YLeaf Rttresponsesense::tcpConnectTimeout {12, "tcpConnectTimeout"};
const Enum::YLeaf Rttresponsesense::httpTransactionTimeout {13, "httpTransactionTimeout"};
const Enum::YLeaf Rttresponsesense::dnsQueryError {14, "dnsQueryError"};
const Enum::YLeaf Rttresponsesense::httpError {15, "httpError"};
const Enum::YLeaf Rttresponsesense::error {16, "error"};
const Enum::YLeaf Rttresponsesense::mplsLspEchoTxError {17, "mplsLspEchoTxError"};
const Enum::YLeaf Rttresponsesense::mplsLspUnreachable {18, "mplsLspUnreachable"};
const Enum::YLeaf Rttresponsesense::mplsLspMalformedReq {19, "mplsLspMalformedReq"};
const Enum::YLeaf Rttresponsesense::mplsLspReachButNotFEC {20, "mplsLspReachButNotFEC"};
const Enum::YLeaf Rttresponsesense::enableOk {21, "enableOk"};
const Enum::YLeaf Rttresponsesense::enableNoConnect {22, "enableNoConnect"};
const Enum::YLeaf Rttresponsesense::enableVersionFail {23, "enableVersionFail"};
const Enum::YLeaf Rttresponsesense::enableInternalError {24, "enableInternalError"};
const Enum::YLeaf Rttresponsesense::enableAbort {25, "enableAbort"};
const Enum::YLeaf Rttresponsesense::enableFail {26, "enableFail"};
const Enum::YLeaf Rttresponsesense::enableAuthFail {27, "enableAuthFail"};
const Enum::YLeaf Rttresponsesense::enableFormatError {28, "enableFormatError"};
const Enum::YLeaf Rttresponsesense::enablePortInUse {29, "enablePortInUse"};
const Enum::YLeaf Rttresponsesense::statsRetrieveOk {30, "statsRetrieveOk"};
const Enum::YLeaf Rttresponsesense::statsRetrieveNoConnect {31, "statsRetrieveNoConnect"};
const Enum::YLeaf Rttresponsesense::statsRetrieveVersionFail {32, "statsRetrieveVersionFail"};
const Enum::YLeaf Rttresponsesense::statsRetrieveInternalError {33, "statsRetrieveInternalError"};
const Enum::YLeaf Rttresponsesense::statsRetrieveAbort {34, "statsRetrieveAbort"};
const Enum::YLeaf Rttresponsesense::statsRetrieveFail {35, "statsRetrieveFail"};
const Enum::YLeaf Rttresponsesense::statsRetrieveAuthFail {36, "statsRetrieveAuthFail"};
const Enum::YLeaf Rttresponsesense::statsRetrieveFormatError {37, "statsRetrieveFormatError"};
const Enum::YLeaf Rttresponsesense::statsRetrievePortInUse {38, "statsRetrievePortInUse"};


}
}

