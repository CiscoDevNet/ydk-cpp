
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_RTTMON_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_RTTMON_TC_MIB {

const Enum::YLeaf RttReset::ready {1, "ready"};
const Enum::YLeaf RttReset::reset {2, "reset"};

const Enum::YLeaf RttMonOperation::notApplicable {0, "notApplicable"};
const Enum::YLeaf RttMonOperation::httpGet {1, "httpGet"};
const Enum::YLeaf RttMonOperation::httpRaw {2, "httpRaw"};
const Enum::YLeaf RttMonOperation::ftpGet {3, "ftpGet"};
const Enum::YLeaf RttMonOperation::ftpPassive {4, "ftpPassive"};
const Enum::YLeaf RttMonOperation::ftpActive {5, "ftpActive"};
const Enum::YLeaf RttMonOperation::voipDTAlertRinging {6, "voipDTAlertRinging"};
const Enum::YLeaf RttMonOperation::voipDTConnectOK {7, "voipDTConnectOK"};

const Enum::YLeaf RttResponseSense::other {0, "other"};
const Enum::YLeaf RttResponseSense::ok {1, "ok"};
const Enum::YLeaf RttResponseSense::disconnected {2, "disconnected"};
const Enum::YLeaf RttResponseSense::overThreshold {3, "overThreshold"};
const Enum::YLeaf RttResponseSense::timeout {4, "timeout"};
const Enum::YLeaf RttResponseSense::busy {5, "busy"};
const Enum::YLeaf RttResponseSense::notConnected {6, "notConnected"};
const Enum::YLeaf RttResponseSense::dropped {7, "dropped"};
const Enum::YLeaf RttResponseSense::sequenceError {8, "sequenceError"};
const Enum::YLeaf RttResponseSense::verifyError {9, "verifyError"};
const Enum::YLeaf RttResponseSense::applicationSpecific {10, "applicationSpecific"};
const Enum::YLeaf RttResponseSense::dnsServerTimeout {11, "dnsServerTimeout"};
const Enum::YLeaf RttResponseSense::tcpConnectTimeout {12, "tcpConnectTimeout"};
const Enum::YLeaf RttResponseSense::httpTransactionTimeout {13, "httpTransactionTimeout"};
const Enum::YLeaf RttResponseSense::dnsQueryError {14, "dnsQueryError"};
const Enum::YLeaf RttResponseSense::httpError {15, "httpError"};
const Enum::YLeaf RttResponseSense::error {16, "error"};
const Enum::YLeaf RttResponseSense::mplsLspEchoTxError {17, "mplsLspEchoTxError"};
const Enum::YLeaf RttResponseSense::mplsLspUnreachable {18, "mplsLspUnreachable"};
const Enum::YLeaf RttResponseSense::mplsLspMalformedReq {19, "mplsLspMalformedReq"};
const Enum::YLeaf RttResponseSense::mplsLspReachButNotFEC {20, "mplsLspReachButNotFEC"};
const Enum::YLeaf RttResponseSense::enableOk {21, "enableOk"};
const Enum::YLeaf RttResponseSense::enableNoConnect {22, "enableNoConnect"};
const Enum::YLeaf RttResponseSense::enableVersionFail {23, "enableVersionFail"};
const Enum::YLeaf RttResponseSense::enableInternalError {24, "enableInternalError"};
const Enum::YLeaf RttResponseSense::enableAbort {25, "enableAbort"};
const Enum::YLeaf RttResponseSense::enableFail {26, "enableFail"};
const Enum::YLeaf RttResponseSense::enableAuthFail {27, "enableAuthFail"};
const Enum::YLeaf RttResponseSense::enableFormatError {28, "enableFormatError"};
const Enum::YLeaf RttResponseSense::enablePortInUse {29, "enablePortInUse"};
const Enum::YLeaf RttResponseSense::statsRetrieveOk {30, "statsRetrieveOk"};
const Enum::YLeaf RttResponseSense::statsRetrieveNoConnect {31, "statsRetrieveNoConnect"};
const Enum::YLeaf RttResponseSense::statsRetrieveVersionFail {32, "statsRetrieveVersionFail"};
const Enum::YLeaf RttResponseSense::statsRetrieveInternalError {33, "statsRetrieveInternalError"};
const Enum::YLeaf RttResponseSense::statsRetrieveAbort {34, "statsRetrieveAbort"};
const Enum::YLeaf RttResponseSense::statsRetrieveFail {35, "statsRetrieveFail"};
const Enum::YLeaf RttResponseSense::statsRetrieveAuthFail {36, "statsRetrieveAuthFail"};
const Enum::YLeaf RttResponseSense::statsRetrieveFormatError {37, "statsRetrieveFormatError"};
const Enum::YLeaf RttResponseSense::statsRetrievePortInUse {38, "statsRetrievePortInUse"};

const Enum::YLeaf RttMonRttType::none {0, "none"};
const Enum::YLeaf RttMonRttType::echo {1, "echo"};
const Enum::YLeaf RttMonRttType::pathEcho {2, "pathEcho"};
const Enum::YLeaf RttMonRttType::fileIO {3, "fileIO"};
const Enum::YLeaf RttMonRttType::script {4, "script"};
const Enum::YLeaf RttMonRttType::udpEcho {5, "udpEcho"};
const Enum::YLeaf RttMonRttType::tcpConnect {6, "tcpConnect"};
const Enum::YLeaf RttMonRttType::http {7, "http"};
const Enum::YLeaf RttMonRttType::dns {8, "dns"};
const Enum::YLeaf RttMonRttType::jitter {9, "jitter"};
const Enum::YLeaf RttMonRttType::dlsw {10, "dlsw"};
const Enum::YLeaf RttMonRttType::dhcp {11, "dhcp"};
const Enum::YLeaf RttMonRttType::ftp {12, "ftp"};
const Enum::YLeaf RttMonRttType::voip {13, "voip"};
const Enum::YLeaf RttMonRttType::rtp {14, "rtp"};
const Enum::YLeaf RttMonRttType::lspGroup {15, "lspGroup"};
const Enum::YLeaf RttMonRttType::icmpjitter {16, "icmpjitter"};
const Enum::YLeaf RttMonRttType::lspPing {17, "lspPing"};
const Enum::YLeaf RttMonRttType::lspTrace {18, "lspTrace"};
const Enum::YLeaf RttMonRttType::ethernetPing {19, "ethernetPing"};
const Enum::YLeaf RttMonRttType::ethernetJitter {20, "ethernetJitter"};
const Enum::YLeaf RttMonRttType::lspPingPseudowire {21, "lspPingPseudowire"};
const Enum::YLeaf RttMonRttType::video {22, "video"};
const Enum::YLeaf RttMonRttType::y1731Delay {23, "y1731Delay"};
const Enum::YLeaf RttMonRttType::y1731Loss {24, "y1731Loss"};
const Enum::YLeaf RttMonRttType::mcastJitter {25, "mcastJitter"};

const Enum::YLeaf RttMplsVpnMonRttType::jitter {1, "jitter"};
const Enum::YLeaf RttMplsVpnMonRttType::echo {2, "echo"};
const Enum::YLeaf RttMplsVpnMonRttType::pathEcho {3, "pathEcho"};

const Enum::YLeaf RttMplsVpnMonLpdFailureSense::unknown {1, "unknown"};
const Enum::YLeaf RttMplsVpnMonLpdFailureSense::noPath {2, "noPath"};
const Enum::YLeaf RttMplsVpnMonLpdFailureSense::allPathsBroken {3, "allPathsBroken"};
const Enum::YLeaf RttMplsVpnMonLpdFailureSense::allPathsUnexplorable {4, "allPathsUnexplorable"};
const Enum::YLeaf RttMplsVpnMonLpdFailureSense::allPathsBrokenOrUnexplorable {5, "allPathsBrokenOrUnexplorable"};
const Enum::YLeaf RttMplsVpnMonLpdFailureSense::timeout {6, "timeout"};
const Enum::YLeaf RttMplsVpnMonLpdFailureSense::error {7, "error"};

const Enum::YLeaf RttMplsVpnMonLpdGrpStatus::unknown {1, "unknown"};
const Enum::YLeaf RttMplsVpnMonLpdGrpStatus::up {2, "up"};
const Enum::YLeaf RttMplsVpnMonLpdGrpStatus::partial {3, "partial"};
const Enum::YLeaf RttMplsVpnMonLpdGrpStatus::down {4, "down"};

const Enum::YLeaf RttMonProtocol::none {0, "none"};
const Enum::YLeaf RttMonProtocol::notApplicable {1, "notApplicable"};
const Enum::YLeaf RttMonProtocol::ipIcmpEcho {2, "ipIcmpEcho"};
const Enum::YLeaf RttMonProtocol::ipUdpEchoAppl {3, "ipUdpEchoAppl"};
const Enum::YLeaf RttMonProtocol::snaRUEcho {4, "snaRUEcho"};
const Enum::YLeaf RttMonProtocol::snaLU0EchoAppl {5, "snaLU0EchoAppl"};
const Enum::YLeaf RttMonProtocol::snaLU2EchoAppl {6, "snaLU2EchoAppl"};
const Enum::YLeaf RttMonProtocol::snaLU62Echo {7, "snaLU62Echo"};
const Enum::YLeaf RttMonProtocol::snaLU62EchoAppl {8, "snaLU62EchoAppl"};
const Enum::YLeaf RttMonProtocol::appleTalkEcho {9, "appleTalkEcho"};
const Enum::YLeaf RttMonProtocol::appleTalkEchoAppl {10, "appleTalkEchoAppl"};
const Enum::YLeaf RttMonProtocol::decNetEcho {11, "decNetEcho"};
const Enum::YLeaf RttMonProtocol::decNetEchoAppl {12, "decNetEchoAppl"};
const Enum::YLeaf RttMonProtocol::ipxEcho {13, "ipxEcho"};
const Enum::YLeaf RttMonProtocol::ipxEchoAppl {14, "ipxEchoAppl"};
const Enum::YLeaf RttMonProtocol::isoClnsEcho {15, "isoClnsEcho"};
const Enum::YLeaf RttMonProtocol::isoClnsEchoAppl {16, "isoClnsEchoAppl"};
const Enum::YLeaf RttMonProtocol::vinesEcho {17, "vinesEcho"};
const Enum::YLeaf RttMonProtocol::vinesEchoAppl {18, "vinesEchoAppl"};
const Enum::YLeaf RttMonProtocol::xnsEcho {19, "xnsEcho"};
const Enum::YLeaf RttMonProtocol::xnsEchoAppl {20, "xnsEchoAppl"};
const Enum::YLeaf RttMonProtocol::apolloEcho {21, "apolloEcho"};
const Enum::YLeaf RttMonProtocol::apolloEchoAppl {22, "apolloEchoAppl"};
const Enum::YLeaf RttMonProtocol::netbiosEchoAppl {23, "netbiosEchoAppl"};
const Enum::YLeaf RttMonProtocol::ipTcpConn {24, "ipTcpConn"};
const Enum::YLeaf RttMonProtocol::httpAppl {25, "httpAppl"};
const Enum::YLeaf RttMonProtocol::dnsAppl {26, "dnsAppl"};
const Enum::YLeaf RttMonProtocol::jitterAppl {27, "jitterAppl"};
const Enum::YLeaf RttMonProtocol::dlswAppl {28, "dlswAppl"};
const Enum::YLeaf RttMonProtocol::dhcpAppl {29, "dhcpAppl"};
const Enum::YLeaf RttMonProtocol::ftpAppl {30, "ftpAppl"};
const Enum::YLeaf RttMonProtocol::mplsLspPingAppl {31, "mplsLspPingAppl"};
const Enum::YLeaf RttMonProtocol::voipAppl {32, "voipAppl"};
const Enum::YLeaf RttMonProtocol::rtpAppl {33, "rtpAppl"};
const Enum::YLeaf RttMonProtocol::icmpJitterAppl {34, "icmpJitterAppl"};
const Enum::YLeaf RttMonProtocol::ethernetPingAppl {35, "ethernetPingAppl"};
const Enum::YLeaf RttMonProtocol::ethernetJitterAppl {36, "ethernetJitterAppl"};
const Enum::YLeaf RttMonProtocol::videoAppl {37, "videoAppl"};
const Enum::YLeaf RttMonProtocol::y1731dmm {38, "y1731dmm"};
const Enum::YLeaf RttMonProtocol::y17311dm {39, "y17311dm"};
const Enum::YLeaf RttMonProtocol::y1731lmm {40, "y1731lmm"};
const Enum::YLeaf RttMonProtocol::mcastJitterAppl {41, "mcastJitterAppl"};
const Enum::YLeaf RttMonProtocol::y1731slm {42, "y1731slm"};
const Enum::YLeaf RttMonProtocol::y1731dmmv1 {43, "y1731dmmv1"};

const Enum::YLeaf RttMonCodecType::notApplicable {0, "notApplicable"};
const Enum::YLeaf RttMonCodecType::g711ulaw {1, "g711ulaw"};
const Enum::YLeaf RttMonCodecType::g711alaw {2, "g711alaw"};
const Enum::YLeaf RttMonCodecType::g729a {3, "g729a"};

const Enum::YLeaf RttMonLSPPingReplyMode::replyIpv4Udp {1, "replyIpv4Udp"};
const Enum::YLeaf RttMonLSPPingReplyMode::replyIpv4UdpRA {2, "replyIpv4UdpRA"};

const Enum::YLeaf RttMonReactVar::rtt {1, "rtt"};
const Enum::YLeaf RttMonReactVar::jitterSDAvg {2, "jitterSDAvg"};
const Enum::YLeaf RttMonReactVar::jitterDSAvg {3, "jitterDSAvg"};
const Enum::YLeaf RttMonReactVar::packetLossSD {4, "packetLossSD"};
const Enum::YLeaf RttMonReactVar::packetLossDS {5, "packetLossDS"};
const Enum::YLeaf RttMonReactVar::mos {6, "mos"};
const Enum::YLeaf RttMonReactVar::timeout {7, "timeout"};
const Enum::YLeaf RttMonReactVar::connectionLoss {8, "connectionLoss"};
const Enum::YLeaf RttMonReactVar::verifyError {9, "verifyError"};
const Enum::YLeaf RttMonReactVar::jitterAvg {10, "jitterAvg"};
const Enum::YLeaf RttMonReactVar::icpif {11, "icpif"};
const Enum::YLeaf RttMonReactVar::packetMIA {12, "packetMIA"};
const Enum::YLeaf RttMonReactVar::packetLateArrival {13, "packetLateArrival"};
const Enum::YLeaf RttMonReactVar::packetOutOfSequence {14, "packetOutOfSequence"};
const Enum::YLeaf RttMonReactVar::maxOfPositiveSD {15, "maxOfPositiveSD"};
const Enum::YLeaf RttMonReactVar::maxOfNegativeSD {16, "maxOfNegativeSD"};
const Enum::YLeaf RttMonReactVar::maxOfPositiveDS {17, "maxOfPositiveDS"};
const Enum::YLeaf RttMonReactVar::maxOfNegativeDS {18, "maxOfNegativeDS"};
const Enum::YLeaf RttMonReactVar::iaJitterDS {19, "iaJitterDS"};
const Enum::YLeaf RttMonReactVar::frameLossDS {20, "frameLossDS"};
const Enum::YLeaf RttMonReactVar::mosLQDS {21, "mosLQDS"};
const Enum::YLeaf RttMonReactVar::mosCQDS {22, "mosCQDS"};
const Enum::YLeaf RttMonReactVar::rFactorDS {23, "rFactorDS"};
const Enum::YLeaf RttMonReactVar::successivePacketLoss {24, "successivePacketLoss"};
const Enum::YLeaf RttMonReactVar::maxOfLatencyDS {25, "maxOfLatencyDS"};
const Enum::YLeaf RttMonReactVar::maxOfLatencySD {26, "maxOfLatencySD"};
const Enum::YLeaf RttMonReactVar::latencyDSAvg {27, "latencyDSAvg"};
const Enum::YLeaf RttMonReactVar::latencySDAvg {28, "latencySDAvg"};
const Enum::YLeaf RttMonReactVar::packetLoss {29, "packetLoss"};
const Enum::YLeaf RttMonReactVar::iaJitterSD {30, "iaJitterSD"};
const Enum::YLeaf RttMonReactVar::mosCQSD {31, "mosCQSD"};
const Enum::YLeaf RttMonReactVar::rFactorSD {32, "rFactorSD"};


}
}

