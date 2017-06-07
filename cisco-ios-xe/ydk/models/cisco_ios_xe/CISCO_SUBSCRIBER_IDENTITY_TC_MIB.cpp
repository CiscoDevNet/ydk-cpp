
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_IDENTITY_TC_MIB.hpp"

namespace ydk {
namespace CISCO_SUBSCRIBER_IDENTITY_TC_MIB {

const Enum::YLeaf SubscribermediatypeEnum::other {1, "other"};
const Enum::YLeaf SubscribermediatypeEnum::async {2, "async"};
const Enum::YLeaf SubscribermediatypeEnum::atm {3, "atm"};
const Enum::YLeaf SubscribermediatypeEnum::ethernet {4, "ethernet"};
const Enum::YLeaf SubscribermediatypeEnum::ip {5, "ip"};
const Enum::YLeaf SubscribermediatypeEnum::isdn {6, "isdn"};
const Enum::YLeaf SubscribermediatypeEnum::mpls {7, "mpls"};
const Enum::YLeaf SubscribermediatypeEnum::sync {8, "sync"};

const Enum::YLeaf SubscriberprotocoltypeEnum::other {1, "other"};
const Enum::YLeaf SubscriberprotocoltypeEnum::atom {2, "atom"};
const Enum::YLeaf SubscriberprotocoltypeEnum::ip {3, "ip"};
const Enum::YLeaf SubscriberprotocoltypeEnum::psdn {4, "psdn"};
const Enum::YLeaf SubscriberprotocoltypeEnum::ppp {5, "ppp"};
const Enum::YLeaf SubscriberprotocoltypeEnum::vpdn {6, "vpdn"};

const Enum::YLeaf SubsessionidentityEnum::other {1, "other"};
const Enum::YLeaf SubsessionidentityEnum::ifIndex {2, "ifIndex"};
const Enum::YLeaf SubsessionidentityEnum::subscriberLabel {3, "subscriberLabel"};
const Enum::YLeaf SubsessionidentityEnum::macAddress {4, "macAddress"};
const Enum::YLeaf SubsessionidentityEnum::nativeVrf {5, "nativeVrf"};
const Enum::YLeaf SubsessionidentityEnum::nativeIpAddress {6, "nativeIpAddress"};
const Enum::YLeaf SubsessionidentityEnum::domainVrf {7, "domainVrf"};
const Enum::YLeaf SubsessionidentityEnum::domainIpAddress {8, "domainIpAddress"};
const Enum::YLeaf SubsessionidentityEnum::pbhk {9, "pbhk"};
const Enum::YLeaf SubsessionidentityEnum::remoteId {10, "remoteId"};
const Enum::YLeaf SubsessionidentityEnum::circuitId {11, "circuitId"};
const Enum::YLeaf SubsessionidentityEnum::nasPort {12, "nasPort"};
const Enum::YLeaf SubsessionidentityEnum::domain {13, "domain"};
const Enum::YLeaf SubsessionidentityEnum::username {14, "username"};
const Enum::YLeaf SubsessionidentityEnum::acctSessionId {15, "acctSessionId"};
const Enum::YLeaf SubsessionidentityEnum::dnis {16, "dnis"};
const Enum::YLeaf SubsessionidentityEnum::media {17, "media"};
const Enum::YLeaf SubsessionidentityEnum::mlpNegotiated {18, "mlpNegotiated"};
const Enum::YLeaf SubsessionidentityEnum::protocol {19, "protocol"};
const Enum::YLeaf SubsessionidentityEnum::serviceName {20, "serviceName"};
const Enum::YLeaf SubsessionidentityEnum::dhcpClass {21, "dhcpClass"};
const Enum::YLeaf SubsessionidentityEnum::tunnelName {22, "tunnelName"};


}
}

