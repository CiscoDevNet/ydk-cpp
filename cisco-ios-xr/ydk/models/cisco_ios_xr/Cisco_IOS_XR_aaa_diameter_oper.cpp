
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_diameter_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_diameter_oper {

const Enum::YLeaf WhoInitiatedDisconnect::none {0, "none"};
const Enum::YLeaf WhoInitiatedDisconnect::host {1, "host"};
const Enum::YLeaf WhoInitiatedDisconnect::peer {2, "peer"};

const Enum::YLeaf PeerStateValue::state_none {0, "state-none"};
const Enum::YLeaf PeerStateValue::closed {1, "closed"};
const Enum::YLeaf PeerStateValue::wait_connection_ack {2, "wait-connection-ack"};
const Enum::YLeaf PeerStateValue::wait_cea {3, "wait-cea"};
const Enum::YLeaf PeerStateValue::state_open {4, "state-open"};
const Enum::YLeaf PeerStateValue::closing {5, "closing"};
const Enum::YLeaf PeerStateValue::suspect {6, "suspect"};

const Enum::YLeaf DisconnectCause::reboot {0, "reboot"};
const Enum::YLeaf DisconnectCause::busy {1, "busy"};
const Enum::YLeaf DisconnectCause::do_not_wait_to_talk {2, "do-not-wait-to-talk"};

const Enum::YLeaf Peer::undefined {0, "undefined"};
const Enum::YLeaf Peer::server {1, "server"};

const Enum::YLeaf ProtocolTypeValue::protocol_none {0, "protocol-none"};
const Enum::YLeaf ProtocolTypeValue::tcp {1, "tcp"};

const Enum::YLeaf SecurityTypeValue::security_type_none {0, "security-type-none"};
const Enum::YLeaf SecurityTypeValue::type {1, "type"};
const Enum::YLeaf SecurityTypeValue::ipsec {2, "ipsec"};


}
}

