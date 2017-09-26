
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_IDENTITY_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_IDENTITY_TC_MIB {

const Enum::YLeaf SubSessionIdentity::other {1, "other"};
const Enum::YLeaf SubSessionIdentity::ifIndex {2, "ifIndex"};
const Enum::YLeaf SubSessionIdentity::subscriberLabel {3, "subscriberLabel"};
const Enum::YLeaf SubSessionIdentity::macAddress {4, "macAddress"};
const Enum::YLeaf SubSessionIdentity::nativeVrf {5, "nativeVrf"};
const Enum::YLeaf SubSessionIdentity::nativeIpAddress {6, "nativeIpAddress"};
const Enum::YLeaf SubSessionIdentity::domainVrf {7, "domainVrf"};
const Enum::YLeaf SubSessionIdentity::domainIpAddress {8, "domainIpAddress"};
const Enum::YLeaf SubSessionIdentity::pbhk {9, "pbhk"};
const Enum::YLeaf SubSessionIdentity::remoteId {10, "remoteId"};
const Enum::YLeaf SubSessionIdentity::circuitId {11, "circuitId"};
const Enum::YLeaf SubSessionIdentity::nasPort {12, "nasPort"};
const Enum::YLeaf SubSessionIdentity::domain {13, "domain"};
const Enum::YLeaf SubSessionIdentity::username {14, "username"};
const Enum::YLeaf SubSessionIdentity::acctSessionId {15, "acctSessionId"};
const Enum::YLeaf SubSessionIdentity::dnis {16, "dnis"};
const Enum::YLeaf SubSessionIdentity::media {17, "media"};
const Enum::YLeaf SubSessionIdentity::mlpNegotiated {18, "mlpNegotiated"};
const Enum::YLeaf SubSessionIdentity::protocol {19, "protocol"};
const Enum::YLeaf SubSessionIdentity::serviceName {20, "serviceName"};
const Enum::YLeaf SubSessionIdentity::dhcpClass {21, "dhcpClass"};
const Enum::YLeaf SubSessionIdentity::tunnelName {22, "tunnelName"};

const Enum::YLeaf SubscriberProtocolType::other {1, "other"};
const Enum::YLeaf SubscriberProtocolType::atom {2, "atom"};
const Enum::YLeaf SubscriberProtocolType::ip {3, "ip"};
const Enum::YLeaf SubscriberProtocolType::psdn {4, "psdn"};
const Enum::YLeaf SubscriberProtocolType::ppp {5, "ppp"};
const Enum::YLeaf SubscriberProtocolType::vpdn {6, "vpdn"};

const Enum::YLeaf SubscriberMediaType::other {1, "other"};
const Enum::YLeaf SubscriberMediaType::async {2, "async"};
const Enum::YLeaf SubscriberMediaType::atm {3, "atm"};
const Enum::YLeaf SubscriberMediaType::ethernet {4, "ethernet"};
const Enum::YLeaf SubscriberMediaType::ip {5, "ip"};
const Enum::YLeaf SubscriberMediaType::isdn {6, "isdn"};
const Enum::YLeaf SubscriberMediaType::mpls {7, "mpls"};
const Enum::YLeaf SubscriberMediaType::sync {8, "sync"};


}
}

