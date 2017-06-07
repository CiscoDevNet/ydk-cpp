
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_CEF_TC.hpp"

namespace ydk {
namespace CISCO_CEF_TC {

const Enum::YLeaf CeffailurereasonEnum::none {1, "none"};
const Enum::YLeaf CeffailurereasonEnum::mallocFailure {2, "mallocFailure"};
const Enum::YLeaf CeffailurereasonEnum::hwFailure {3, "hwFailure"};
const Enum::YLeaf CeffailurereasonEnum::keepaliveFailure {4, "keepaliveFailure"};
const Enum::YLeaf CeffailurereasonEnum::noMsgBuffer {5, "noMsgBuffer"};
const Enum::YLeaf CeffailurereasonEnum::invalidMsgSize {6, "invalidMsgSize"};
const Enum::YLeaf CeffailurereasonEnum::internalError {7, "internalError"};

const Enum::YLeaf CefccstatusEnum::ccStatusIdle {1, "ccStatusIdle"};
const Enum::YLeaf CefccstatusEnum::ccStatusRunning {2, "ccStatusRunning"};
const Enum::YLeaf CefccstatusEnum::ccStatusDone {3, "ccStatusDone"};

const Enum::YLeaf CefforwardingelementspecialtypeEnum::illegal {1, "illegal"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::punt {2, "punt"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::drop {3, "drop"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::discard {4, "discard"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::null {5, "null"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::glean {6, "glean"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::unresolved {7, "unresolved"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::noRoute {8, "noRoute"};
const Enum::YLeaf CefforwardingelementspecialtypeEnum::none {9, "none"};

const Enum::YLeaf CefprefixsearchstateEnum::running {1, "running"};
const Enum::YLeaf CefprefixsearchstateEnum::matchFound {2, "matchFound"};
const Enum::YLeaf CefprefixsearchstateEnum::noMatchFound {3, "noMatchFound"};

const Enum::YLeaf CefpathtypeEnum::receive {1, "receive"};
const Enum::YLeaf CefpathtypeEnum::connectedPrefix {2, "connectedPrefix"};
const Enum::YLeaf CefpathtypeEnum::attachedPrefix {3, "attachedPrefix"};
const Enum::YLeaf CefpathtypeEnum::attachedHost {4, "attachedHost"};
const Enum::YLeaf CefpathtypeEnum::attachedNexthop {5, "attachedNexthop"};
const Enum::YLeaf CefpathtypeEnum::recursiveNexthop {6, "recursiveNexthop"};
const Enum::YLeaf CefpathtypeEnum::adjacencyPrefix {7, "adjacencyPrefix"};
const Enum::YLeaf CefpathtypeEnum::specialPrefix {8, "specialPrefix"};
const Enum::YLeaf CefpathtypeEnum::unknown {9, "unknown"};

const Enum::YLeaf CefcctypeEnum::lcDetect {1, "lcDetect"};
const Enum::YLeaf CefcctypeEnum::scanFibLcRp {2, "scanFibLcRp"};
const Enum::YLeaf CefcctypeEnum::scanFibRpLc {3, "scanFibRpLc"};
const Enum::YLeaf CefcctypeEnum::scanRibFib {4, "scanRibFib"};
const Enum::YLeaf CefcctypeEnum::scanFibRib {5, "scanFibRib"};
const Enum::YLeaf CefcctypeEnum::scanFibHwSw {6, "scanFibHwSw"};
const Enum::YLeaf CefcctypeEnum::scanFibSwHw {7, "scanFibSwHw"};
const Enum::YLeaf CefcctypeEnum::fullScanRibFib {8, "fullScanRibFib"};
const Enum::YLeaf CefcctypeEnum::fullScanFibRib {9, "fullScanFibRib"};
const Enum::YLeaf CefcctypeEnum::fullScanFibRpLc {10, "fullScanFibRpLc"};
const Enum::YLeaf CefcctypeEnum::fullScanFibLcRp {11, "fullScanFibLcRp"};
const Enum::YLeaf CefcctypeEnum::fullScanFibHwSw {12, "fullScanFibHwSw"};
const Enum::YLeaf CefcctypeEnum::fullScanFibSwHw {13, "fullScanFibSwHw"};

const Enum::YLeaf CefoperstatusEnum::up {1, "up"};
const Enum::YLeaf CefoperstatusEnum::down {2, "down"};

const Enum::YLeaf CefadjlinktypeEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf CefadjlinktypeEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf CefadjlinktypeEnum::mpls {3, "mpls"};
const Enum::YLeaf CefadjlinktypeEnum::raw {4, "raw"};
const Enum::YLeaf CefadjlinktypeEnum::unknown {5, "unknown"};

const Enum::YLeaf CefccactionEnum::ccActionStart {1, "ccActionStart"};
const Enum::YLeaf CefccactionEnum::ccActionAbort {2, "ccActionAbort"};
const Enum::YLeaf CefccactionEnum::ccActionNone {3, "ccActionNone"};

const Enum::YLeaf CefadminstatusEnum::enabled {1, "enabled"};
const Enum::YLeaf CefadminstatusEnum::disabled {2, "disabled"};

const Enum::YLeaf CefipversionEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf CefipversionEnum::ipv6 {2, "ipv6"};


}
}

