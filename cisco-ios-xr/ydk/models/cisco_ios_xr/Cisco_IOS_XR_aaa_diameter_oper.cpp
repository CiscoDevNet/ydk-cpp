
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_diameter_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_aaa_diameter_oper {

const Enum::YLeaf DisconnectCauseEnum::reboot {0, "reboot"};
const Enum::YLeaf DisconnectCauseEnum::busy {1, "busy"};
const Enum::YLeaf DisconnectCauseEnum::do_not_wait_to_talk {2, "do-not-wait-to-talk"};

const Enum::YLeaf SecurityTypeValueEnum::security_type_none {0, "security-type-none"};
const Enum::YLeaf SecurityTypeValueEnum::type {1, "type"};
const Enum::YLeaf SecurityTypeValueEnum::ipsec {2, "ipsec"};

const Enum::YLeaf PeerStateValueEnum::state_none {0, "state-none"};
const Enum::YLeaf PeerStateValueEnum::closed {1, "closed"};
const Enum::YLeaf PeerStateValueEnum::wait_connection_ack {2, "wait-connection-ack"};
const Enum::YLeaf PeerStateValueEnum::wait_cea {3, "wait-cea"};
const Enum::YLeaf PeerStateValueEnum::state_open {4, "state-open"};
const Enum::YLeaf PeerStateValueEnum::closing {5, "closing"};
const Enum::YLeaf PeerStateValueEnum::suspect {6, "suspect"};

const Enum::YLeaf ProtocolTypeValueEnum::protocol_none {0, "protocol-none"};
const Enum::YLeaf ProtocolTypeValueEnum::tcp {1, "tcp"};

const Enum::YLeaf PeerEnum::undefined {0, "undefined"};
const Enum::YLeaf PeerEnum::server {1, "server"};

const Enum::YLeaf WhoInitiatedDisconnectEnum::none {0, "none"};
const Enum::YLeaf WhoInitiatedDisconnectEnum::host {1, "host"};
const Enum::YLeaf WhoInitiatedDisconnectEnum::peer {2, "peer"};


}
}

