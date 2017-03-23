
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_icpe_sdacp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_icpe_sdacp_oper {

const Enum::YLeaf IcpeCpmChannelResyncStateEnum::icpe_cpm_channel_resync_state_unknown {0, "icpe-cpm-channel-resync-state-unknown"};
const Enum::YLeaf IcpeCpmChannelResyncStateEnum::icpe_cpm_channel_resync_state_not_in_resync {1, "icpe-cpm-channel-resync-state-not-in-resync"};
const Enum::YLeaf IcpeCpmChannelResyncStateEnum::icpe_cpm_channel_resync_state_in_client_resync {2, "icpe-cpm-channel-resync-state-in-client-resync"};
const Enum::YLeaf IcpeCpmChannelResyncStateEnum::icpe_cpm_channel_resync_state_in_satellite_resync {3, "icpe-cpm-channel-resync-state-in-satellite-resync"};

const Enum::YLeaf IcpeCpmChanFsmStateEnum::icpe_cpm_chan_fsm_state_down {0, "icpe-cpm-chan-fsm-state-down"};
const Enum::YLeaf IcpeCpmChanFsmStateEnum::icpe_cpm_chan_fsm_state_not_supported {1, "icpe-cpm-chan-fsm-state-not-supported"};
const Enum::YLeaf IcpeCpmChanFsmStateEnum::icpe_cpm_chan_fsm_state_closed {2, "icpe-cpm-chan-fsm-state-closed"};
const Enum::YLeaf IcpeCpmChanFsmStateEnum::icpe_cpm_chan_fsm_state_opening {3, "icpe-cpm-chan-fsm-state-opening"};
const Enum::YLeaf IcpeCpmChanFsmStateEnum::icpe_cpm_chan_fsm_state_opened {4, "icpe-cpm-chan-fsm-state-opened"};
const Enum::YLeaf IcpeCpmChanFsmStateEnum::icpe_cpm_chan_fsm_state_open {5, "icpe-cpm-chan-fsm-state-open"};

const Enum::YLeaf DpmProtoHostStateEnum::dpm_proto_host_state_idle {0, "dpm-proto-host-state-idle"};
const Enum::YLeaf DpmProtoHostStateEnum::dpm_proto_host_state_discovered {1, "dpm-proto-host-state-discovered"};
const Enum::YLeaf DpmProtoHostStateEnum::dpm_proto_host_state_rejecting {2, "dpm-proto-host-state-rejecting"};

const Enum::YLeaf IcpeCpmControlFsmStateEnum::icpe_cpm_control_fsm_state_disconnected {0, "icpe-cpm-control-fsm-state-disconnected"};
const Enum::YLeaf IcpeCpmControlFsmStateEnum::icpe_cpm_control_fsm_state_connecting {1, "icpe-cpm-control-fsm-state-connecting"};
const Enum::YLeaf IcpeCpmControlFsmStateEnum::icpe_cpm_control_fsm_state_authenticating {2, "icpe-cpm-control-fsm-state-authenticating"};
const Enum::YLeaf IcpeCpmControlFsmStateEnum::icpe_cpm_control_fsm_state_check_ing_ver {3, "icpe-cpm-control-fsm-state-check-ing-ver"};
const Enum::YLeaf IcpeCpmControlFsmStateEnum::icpe_cpm_control_fsm_state_connected {4, "icpe-cpm-control-fsm-state-connected"};
const Enum::YLeaf IcpeCpmControlFsmStateEnum::icpe_cpm_control_fsm_state_issu {5, "icpe-cpm-control-fsm-state-issu"};

const Enum::YLeaf DpmProtoStateEnum::dpm_proto_state_idle {0, "dpm-proto-state-idle"};
const Enum::YLeaf DpmProtoStateEnum::dpm_proto_state_probing {1, "dpm-proto-state-probing"};
const Enum::YLeaf DpmProtoStateEnum::dpm_proto_state_legacy {2, "dpm-proto-state-legacy"};
const Enum::YLeaf DpmProtoStateEnum::dpm_proto_state_configuring {3, "dpm-proto-state-configuring"};
const Enum::YLeaf DpmProtoStateEnum::dpm_proto_state_discovered {4, "dpm-proto-state-discovered"};
const Enum::YLeaf DpmProtoStateEnum::dpm_proto_state_rejecting {5, "dpm-proto-state-rejecting"};
const Enum::YLeaf DpmProtoStateEnum::dpm_proto_state_seen {6, "dpm-proto-state-seen"};


}
}

