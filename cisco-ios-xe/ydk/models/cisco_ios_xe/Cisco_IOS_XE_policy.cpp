
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_policy.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_policy {

const Enum::YLeaf PrecedenceType2::rsvp {0, "rsvp"};

const Enum::YLeaf PolicyActionType::bandwidth {0, "bandwidth"};
const Enum::YLeaf PolicyActionType::compression {1, "compression"};
const Enum::YLeaf PolicyActionType::drop {2, "drop"};
const Enum::YLeaf PolicyActionType::estimate {3, "estimate"};
const Enum::YLeaf PolicyActionType::fair_queue {4, "fair-queue"};
const Enum::YLeaf PolicyActionType::forward {5, "forward"};
const Enum::YLeaf PolicyActionType::netflow_sampler {6, "netflow-sampler"};
const Enum::YLeaf PolicyActionType::police {7, "police"};
const Enum::YLeaf PolicyActionType::priority {8, "priority"};
const Enum::YLeaf PolicyActionType::queue_limit {9, "queue-limit"};
const Enum::YLeaf PolicyActionType::random_detect {10, "random-detect"};
const Enum::YLeaf PolicyActionType::service_policy {11, "service-policy"};
const Enum::YLeaf PolicyActionType::set {12, "set"};
const Enum::YLeaf PolicyActionType::shape {13, "shape"};
const Enum::YLeaf PolicyActionType::trust {14, "trust"};
const Enum::YLeaf PolicyActionType::dbl {15, "dbl"};
const Enum::YLeaf PolicyActionType::queue_buffers {16, "queue-buffers"};

const Enum::YLeaf ClassNameType::class_default {0, "class-default"};

const Enum::YLeaf PolicePacketsBytesType::packets {0, "packets"};
const Enum::YLeaf PolicePacketsBytesType::bytes {1, "bytes"};

const Enum::YLeaf BytesMsUsType::bytes {0, "bytes"};
const Enum::YLeaf BytesMsUsType::ms {1, "ms"};
const Enum::YLeaf BytesMsUsType::us {2, "us"};

const Enum::YLeaf PolicePpsBpsType::pps {0, "pps"};
const Enum::YLeaf PolicePpsBpsType::bps {1, "bps"};


}
}

