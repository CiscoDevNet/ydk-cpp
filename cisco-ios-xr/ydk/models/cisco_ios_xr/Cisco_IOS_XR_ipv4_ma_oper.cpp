
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_ma_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_ma_oper {

const Enum::YLeaf ImStateEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf Ipv4MaOperConfig::ipv4_ma_oper_client_none {0, "ipv4-ma-oper-client-none"};
const Enum::YLeaf Ipv4MaOperConfig::ipv4_ma_oper_non_oc_client {1, "ipv4-ma-oper-non-oc-client"};
const Enum::YLeaf Ipv4MaOperConfig::ipv4_ma_oper_oc_client {2, "ipv4-ma-oper-oc-client"};

const Enum::YLeaf RpfMode::strict {0, "strict"};
const Enum::YLeaf RpfMode::loose {1, "loose"};

const Enum::YLeaf Ipv4MaOperLineState::unknown {0, "unknown"};
const Enum::YLeaf Ipv4MaOperLineState::shutdown {1, "shutdown"};
const Enum::YLeaf Ipv4MaOperLineState::down {2, "down"};
const Enum::YLeaf Ipv4MaOperLineState::up {3, "up"};


}
}

