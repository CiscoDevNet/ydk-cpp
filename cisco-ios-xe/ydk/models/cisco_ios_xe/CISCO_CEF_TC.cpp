
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CEF_TC.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_CEF_TC {

const Enum::YLeaf Cefprefixsearchstate::running {1, "running"};
const Enum::YLeaf Cefprefixsearchstate::matchFound {2, "matchFound"};
const Enum::YLeaf Cefprefixsearchstate::noMatchFound {3, "noMatchFound"};

const Enum::YLeaf Cefccstatus::ccStatusIdle {1, "ccStatusIdle"};
const Enum::YLeaf Cefccstatus::ccStatusRunning {2, "ccStatusRunning"};
const Enum::YLeaf Cefccstatus::ccStatusDone {3, "ccStatusDone"};

const Enum::YLeaf Cefccaction::ccActionStart {1, "ccActionStart"};
const Enum::YLeaf Cefccaction::ccActionAbort {2, "ccActionAbort"};
const Enum::YLeaf Cefccaction::ccActionNone {3, "ccActionNone"};

const Enum::YLeaf Cefforwardingelementspecialtype::illegal {1, "illegal"};
const Enum::YLeaf Cefforwardingelementspecialtype::punt {2, "punt"};
const Enum::YLeaf Cefforwardingelementspecialtype::drop {3, "drop"};
const Enum::YLeaf Cefforwardingelementspecialtype::discard {4, "discard"};
const Enum::YLeaf Cefforwardingelementspecialtype::null {5, "null"};
const Enum::YLeaf Cefforwardingelementspecialtype::glean {6, "glean"};
const Enum::YLeaf Cefforwardingelementspecialtype::unresolved {7, "unresolved"};
const Enum::YLeaf Cefforwardingelementspecialtype::noRoute {8, "noRoute"};
const Enum::YLeaf Cefforwardingelementspecialtype::none {9, "none"};

const Enum::YLeaf Cefipversion::ipv4 {1, "ipv4"};
const Enum::YLeaf Cefipversion::ipv6 {2, "ipv6"};

const Enum::YLeaf Cefadminstatus::enabled {1, "enabled"};
const Enum::YLeaf Cefadminstatus::disabled {2, "disabled"};

const Enum::YLeaf Cefpathtype::receive {1, "receive"};
const Enum::YLeaf Cefpathtype::connectedPrefix {2, "connectedPrefix"};
const Enum::YLeaf Cefpathtype::attachedPrefix {3, "attachedPrefix"};
const Enum::YLeaf Cefpathtype::attachedHost {4, "attachedHost"};
const Enum::YLeaf Cefpathtype::attachedNexthop {5, "attachedNexthop"};
const Enum::YLeaf Cefpathtype::recursiveNexthop {6, "recursiveNexthop"};
const Enum::YLeaf Cefpathtype::adjacencyPrefix {7, "adjacencyPrefix"};
const Enum::YLeaf Cefpathtype::specialPrefix {8, "specialPrefix"};
const Enum::YLeaf Cefpathtype::unknown {9, "unknown"};

const Enum::YLeaf Cefcctype::lcDetect {1, "lcDetect"};
const Enum::YLeaf Cefcctype::scanFibLcRp {2, "scanFibLcRp"};
const Enum::YLeaf Cefcctype::scanFibRpLc {3, "scanFibRpLc"};
const Enum::YLeaf Cefcctype::scanRibFib {4, "scanRibFib"};
const Enum::YLeaf Cefcctype::scanFibRib {5, "scanFibRib"};
const Enum::YLeaf Cefcctype::scanFibHwSw {6, "scanFibHwSw"};
const Enum::YLeaf Cefcctype::scanFibSwHw {7, "scanFibSwHw"};
const Enum::YLeaf Cefcctype::fullScanRibFib {8, "fullScanRibFib"};
const Enum::YLeaf Cefcctype::fullScanFibRib {9, "fullScanFibRib"};
const Enum::YLeaf Cefcctype::fullScanFibRpLc {10, "fullScanFibRpLc"};
const Enum::YLeaf Cefcctype::fullScanFibLcRp {11, "fullScanFibLcRp"};
const Enum::YLeaf Cefcctype::fullScanFibHwSw {12, "fullScanFibHwSw"};
const Enum::YLeaf Cefcctype::fullScanFibSwHw {13, "fullScanFibSwHw"};

const Enum::YLeaf Cefoperstatus::up {1, "up"};
const Enum::YLeaf Cefoperstatus::down {2, "down"};

const Enum::YLeaf Cefadjlinktype::ipv4 {1, "ipv4"};
const Enum::YLeaf Cefadjlinktype::ipv6 {2, "ipv6"};
const Enum::YLeaf Cefadjlinktype::mpls {3, "mpls"};
const Enum::YLeaf Cefadjlinktype::raw {4, "raw"};
const Enum::YLeaf Cefadjlinktype::unknown {5, "unknown"};

const Enum::YLeaf Ceffailurereason::none {1, "none"};
const Enum::YLeaf Ceffailurereason::mallocFailure {2, "mallocFailure"};
const Enum::YLeaf Ceffailurereason::hwFailure {3, "hwFailure"};
const Enum::YLeaf Ceffailurereason::keepaliveFailure {4, "keepaliveFailure"};
const Enum::YLeaf Ceffailurereason::noMsgBuffer {5, "noMsgBuffer"};
const Enum::YLeaf Ceffailurereason::invalidMsgSize {6, "invalidMsgSize"};
const Enum::YLeaf Ceffailurereason::internalError {7, "internalError"};


}
}

