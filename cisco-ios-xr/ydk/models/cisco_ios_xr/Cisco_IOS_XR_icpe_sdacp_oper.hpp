#ifndef _CISCO_IOS_XR_ICPE_SDACP_OPER_
#define _CISCO_IOS_XR_ICPE_SDACP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_icpe_sdacp_oper {

class IcpeCpmChannelResyncState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_cpm_channel_resync_state_unknown;
        static const ydk::Enum::YLeaf icpe_cpm_channel_resync_state_not_in_resync;
        static const ydk::Enum::YLeaf icpe_cpm_channel_resync_state_in_client_resync;
        static const ydk::Enum::YLeaf icpe_cpm_channel_resync_state_in_satellite_resync;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-cpm-channel-resync-state-unknown") return 0;
            if (name == "icpe-cpm-channel-resync-state-not-in-resync") return 1;
            if (name == "icpe-cpm-channel-resync-state-in-client-resync") return 2;
            if (name == "icpe-cpm-channel-resync-state-in-satellite-resync") return 3;
            return -1;
        }
};

class IcpeCpmChanFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_cpm_chan_fsm_state_down;
        static const ydk::Enum::YLeaf icpe_cpm_chan_fsm_state_not_supported;
        static const ydk::Enum::YLeaf icpe_cpm_chan_fsm_state_closed;
        static const ydk::Enum::YLeaf icpe_cpm_chan_fsm_state_opening;
        static const ydk::Enum::YLeaf icpe_cpm_chan_fsm_state_opened;
        static const ydk::Enum::YLeaf icpe_cpm_chan_fsm_state_open;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-cpm-chan-fsm-state-down") return 0;
            if (name == "icpe-cpm-chan-fsm-state-not-supported") return 1;
            if (name == "icpe-cpm-chan-fsm-state-closed") return 2;
            if (name == "icpe-cpm-chan-fsm-state-opening") return 3;
            if (name == "icpe-cpm-chan-fsm-state-opened") return 4;
            if (name == "icpe-cpm-chan-fsm-state-open") return 5;
            return -1;
        }
};

class DpmProtoHostState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dpm_proto_host_state_idle;
        static const ydk::Enum::YLeaf dpm_proto_host_state_discovered;
        static const ydk::Enum::YLeaf dpm_proto_host_state_rejecting;

        static int get_enum_value(const std::string & name) {
            if (name == "dpm-proto-host-state-idle") return 0;
            if (name == "dpm-proto-host-state-discovered") return 1;
            if (name == "dpm-proto-host-state-rejecting") return 2;
            return -1;
        }
};

class IcpeCpmControlFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf icpe_cpm_control_fsm_state_disconnected;
        static const ydk::Enum::YLeaf icpe_cpm_control_fsm_state_connecting;
        static const ydk::Enum::YLeaf icpe_cpm_control_fsm_state_authenticating;
        static const ydk::Enum::YLeaf icpe_cpm_control_fsm_state_check_ing_ver;
        static const ydk::Enum::YLeaf icpe_cpm_control_fsm_state_connected;
        static const ydk::Enum::YLeaf icpe_cpm_control_fsm_state_issu;

        static int get_enum_value(const std::string & name) {
            if (name == "icpe-cpm-control-fsm-state-disconnected") return 0;
            if (name == "icpe-cpm-control-fsm-state-connecting") return 1;
            if (name == "icpe-cpm-control-fsm-state-authenticating") return 2;
            if (name == "icpe-cpm-control-fsm-state-check-ing-ver") return 3;
            if (name == "icpe-cpm-control-fsm-state-connected") return 4;
            if (name == "icpe-cpm-control-fsm-state-issu") return 5;
            return -1;
        }
};

class DpmProtoState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dpm_proto_state_idle;
        static const ydk::Enum::YLeaf dpm_proto_state_probing;
        static const ydk::Enum::YLeaf dpm_proto_state_legacy;
        static const ydk::Enum::YLeaf dpm_proto_state_configuring;
        static const ydk::Enum::YLeaf dpm_proto_state_discovered;
        static const ydk::Enum::YLeaf dpm_proto_state_rejecting;
        static const ydk::Enum::YLeaf dpm_proto_state_seen;

        static int get_enum_value(const std::string & name) {
            if (name == "dpm-proto-state-idle") return 0;
            if (name == "dpm-proto-state-probing") return 1;
            if (name == "dpm-proto-state-legacy") return 2;
            if (name == "dpm-proto-state-configuring") return 3;
            if (name == "dpm-proto-state-discovered") return 4;
            if (name == "dpm-proto-state-rejecting") return 5;
            if (name == "dpm-proto-state-seen") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_ICPE_SDACP_OPER_ */

