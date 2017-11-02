
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CEF_TC.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CEF_TC {

const Enum::YLeaf CefIpVersion::ipv4 {1, "ipv4"};
const Enum::YLeaf CefIpVersion::ipv6 {2, "ipv6"};

const Enum::YLeaf CefAdjLinkType::ipv4 {1, "ipv4"};
const Enum::YLeaf CefAdjLinkType::ipv6 {2, "ipv6"};
const Enum::YLeaf CefAdjLinkType::mpls {3, "mpls"};
const Enum::YLeaf CefAdjLinkType::raw {4, "raw"};
const Enum::YLeaf CefAdjLinkType::unknown {5, "unknown"};

const Enum::YLeaf CefPathType::receive {1, "receive"};
const Enum::YLeaf CefPathType::connectedPrefix {2, "connectedPrefix"};
const Enum::YLeaf CefPathType::attachedPrefix {3, "attachedPrefix"};
const Enum::YLeaf CefPathType::attachedHost {4, "attachedHost"};
const Enum::YLeaf CefPathType::attachedNexthop {5, "attachedNexthop"};
const Enum::YLeaf CefPathType::recursiveNexthop {6, "recursiveNexthop"};
const Enum::YLeaf CefPathType::adjacencyPrefix {7, "adjacencyPrefix"};
const Enum::YLeaf CefPathType::specialPrefix {8, "specialPrefix"};
const Enum::YLeaf CefPathType::unknown {9, "unknown"};

const Enum::YLeaf CefPrefixSearchState::running {1, "running"};
const Enum::YLeaf CefPrefixSearchState::matchFound {2, "matchFound"};
const Enum::YLeaf CefPrefixSearchState::noMatchFound {3, "noMatchFound"};

const Enum::YLeaf CefForwardingElementSpecialType::illegal {1, "illegal"};
const Enum::YLeaf CefForwardingElementSpecialType::punt {2, "punt"};
const Enum::YLeaf CefForwardingElementSpecialType::drop {3, "drop"};
const Enum::YLeaf CefForwardingElementSpecialType::discard {4, "discard"};
const Enum::YLeaf CefForwardingElementSpecialType::null {5, "null"};
const Enum::YLeaf CefForwardingElementSpecialType::glean {6, "glean"};
const Enum::YLeaf CefForwardingElementSpecialType::unresolved {7, "unresolved"};
const Enum::YLeaf CefForwardingElementSpecialType::noRoute {8, "noRoute"};
const Enum::YLeaf CefForwardingElementSpecialType::none {9, "none"};

const Enum::YLeaf CefAdminStatus::enabled {1, "enabled"};
const Enum::YLeaf CefAdminStatus::disabled {2, "disabled"};

const Enum::YLeaf CefOperStatus::up {1, "up"};
const Enum::YLeaf CefOperStatus::down {2, "down"};

const Enum::YLeaf CefFailureReason::none {1, "none"};
const Enum::YLeaf CefFailureReason::mallocFailure {2, "mallocFailure"};
const Enum::YLeaf CefFailureReason::hwFailure {3, "hwFailure"};
const Enum::YLeaf CefFailureReason::keepaliveFailure {4, "keepaliveFailure"};
const Enum::YLeaf CefFailureReason::noMsgBuffer {5, "noMsgBuffer"};
const Enum::YLeaf CefFailureReason::invalidMsgSize {6, "invalidMsgSize"};
const Enum::YLeaf CefFailureReason::internalError {7, "internalError"};

const Enum::YLeaf CefCCType::lcDetect {1, "lcDetect"};
const Enum::YLeaf CefCCType::scanFibLcRp {2, "scanFibLcRp"};
const Enum::YLeaf CefCCType::scanFibRpLc {3, "scanFibRpLc"};
const Enum::YLeaf CefCCType::scanRibFib {4, "scanRibFib"};
const Enum::YLeaf CefCCType::scanFibRib {5, "scanFibRib"};
const Enum::YLeaf CefCCType::scanFibHwSw {6, "scanFibHwSw"};
const Enum::YLeaf CefCCType::scanFibSwHw {7, "scanFibSwHw"};
const Enum::YLeaf CefCCType::fullScanRibFib {8, "fullScanRibFib"};
const Enum::YLeaf CefCCType::fullScanFibRib {9, "fullScanFibRib"};
const Enum::YLeaf CefCCType::fullScanFibRpLc {10, "fullScanFibRpLc"};
const Enum::YLeaf CefCCType::fullScanFibLcRp {11, "fullScanFibLcRp"};
const Enum::YLeaf CefCCType::fullScanFibHwSw {12, "fullScanFibHwSw"};
const Enum::YLeaf CefCCType::fullScanFibSwHw {13, "fullScanFibSwHw"};

const Enum::YLeaf CefCCAction::ccActionStart {1, "ccActionStart"};
const Enum::YLeaf CefCCAction::ccActionAbort {2, "ccActionAbort"};
const Enum::YLeaf CefCCAction::ccActionNone {3, "ccActionNone"};

const Enum::YLeaf CefCCStatus::ccStatusIdle {1, "ccStatusIdle"};
const Enum::YLeaf CefCCStatus::ccStatusRunning {2, "ccStatusRunning"};
const Enum::YLeaf CefCCStatus::ccStatusDone {3, "ccStatusDone"};


}
}

