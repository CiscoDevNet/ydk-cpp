
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_policy.hpp"

namespace ydk {
namespace Cisco_IOS_XE_policy {

const Enum::YLeaf PrecedenceType2Enum::rsvp {0, "rsvp"};

const Enum::YLeaf ClassNameTypeEnum::class_default {0, "class-default"};

const Enum::YLeaf PolicePpsBpsTypeEnum::pps {0, "pps"};
const Enum::YLeaf PolicePpsBpsTypeEnum::bps {1, "bps"};

const Enum::YLeaf PolicePacketsBytesTypeEnum::packets {0, "packets"};
const Enum::YLeaf PolicePacketsBytesTypeEnum::bytes {1, "bytes"};

const Enum::YLeaf PolicyActionTypeEnum::bandwidth {0, "bandwidth"};
const Enum::YLeaf PolicyActionTypeEnum::compression {1, "compression"};
const Enum::YLeaf PolicyActionTypeEnum::drop {2, "drop"};
const Enum::YLeaf PolicyActionTypeEnum::estimate {3, "estimate"};
const Enum::YLeaf PolicyActionTypeEnum::fair_queue {4, "fair-queue"};
const Enum::YLeaf PolicyActionTypeEnum::forward {5, "forward"};
const Enum::YLeaf PolicyActionTypeEnum::netflow_sampler {6, "netflow-sampler"};
const Enum::YLeaf PolicyActionTypeEnum::police {7, "police"};
const Enum::YLeaf PolicyActionTypeEnum::priority {8, "priority"};
const Enum::YLeaf PolicyActionTypeEnum::queue_limit {9, "queue-limit"};
const Enum::YLeaf PolicyActionTypeEnum::random_detect {10, "random-detect"};
const Enum::YLeaf PolicyActionTypeEnum::service_policy {11, "service-policy"};
const Enum::YLeaf PolicyActionTypeEnum::set {12, "set"};
const Enum::YLeaf PolicyActionTypeEnum::shape {13, "shape"};
const Enum::YLeaf PolicyActionTypeEnum::trust {14, "trust"};
const Enum::YLeaf PolicyActionTypeEnum::dbl {15, "dbl"};
const Enum::YLeaf PolicyActionTypeEnum::queue_buffers {16, "queue-buffers"};


}
}

