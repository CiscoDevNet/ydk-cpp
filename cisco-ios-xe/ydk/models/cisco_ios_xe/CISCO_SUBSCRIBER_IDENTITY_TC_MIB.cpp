
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "CISCO_SUBSCRIBER_IDENTITY_TC_MIB.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_IDENTITY_TC_MIB {

const Enum::YLeaf Subscribermediatype::other {1, "other"};
const Enum::YLeaf Subscribermediatype::async {2, "async"};
const Enum::YLeaf Subscribermediatype::atm {3, "atm"};
const Enum::YLeaf Subscribermediatype::ethernet {4, "ethernet"};
const Enum::YLeaf Subscribermediatype::ip {5, "ip"};
const Enum::YLeaf Subscribermediatype::isdn {6, "isdn"};
const Enum::YLeaf Subscribermediatype::mpls {7, "mpls"};
const Enum::YLeaf Subscribermediatype::sync {8, "sync"};

const Enum::YLeaf Subscriberprotocoltype::other {1, "other"};
const Enum::YLeaf Subscriberprotocoltype::atom {2, "atom"};
const Enum::YLeaf Subscriberprotocoltype::ip {3, "ip"};
const Enum::YLeaf Subscriberprotocoltype::psdn {4, "psdn"};
const Enum::YLeaf Subscriberprotocoltype::ppp {5, "ppp"};
const Enum::YLeaf Subscriberprotocoltype::vpdn {6, "vpdn"};

const Enum::YLeaf Subsessionidentity::other {1, "other"};
const Enum::YLeaf Subsessionidentity::ifIndex {2, "ifIndex"};
const Enum::YLeaf Subsessionidentity::subscriberLabel {3, "subscriberLabel"};
const Enum::YLeaf Subsessionidentity::macAddress {4, "macAddress"};
const Enum::YLeaf Subsessionidentity::nativeVrf {5, "nativeVrf"};
const Enum::YLeaf Subsessionidentity::nativeIpAddress {6, "nativeIpAddress"};
const Enum::YLeaf Subsessionidentity::domainVrf {7, "domainVrf"};
const Enum::YLeaf Subsessionidentity::domainIpAddress {8, "domainIpAddress"};
const Enum::YLeaf Subsessionidentity::pbhk {9, "pbhk"};
const Enum::YLeaf Subsessionidentity::remoteId {10, "remoteId"};
const Enum::YLeaf Subsessionidentity::circuitId {11, "circuitId"};
const Enum::YLeaf Subsessionidentity::nasPort {12, "nasPort"};
const Enum::YLeaf Subsessionidentity::domain {13, "domain"};
const Enum::YLeaf Subsessionidentity::username {14, "username"};
const Enum::YLeaf Subsessionidentity::acctSessionId {15, "acctSessionId"};
const Enum::YLeaf Subsessionidentity::dnis {16, "dnis"};
const Enum::YLeaf Subsessionidentity::media {17, "media"};
const Enum::YLeaf Subsessionidentity::mlpNegotiated {18, "mlpNegotiated"};
const Enum::YLeaf Subsessionidentity::protocol {19, "protocol"};
const Enum::YLeaf Subsessionidentity::serviceName {20, "serviceName"};
const Enum::YLeaf Subsessionidentity::dhcpClass {21, "dhcpClass"};
const Enum::YLeaf Subsessionidentity::tunnelName {22, "tunnelName"};


}
}

