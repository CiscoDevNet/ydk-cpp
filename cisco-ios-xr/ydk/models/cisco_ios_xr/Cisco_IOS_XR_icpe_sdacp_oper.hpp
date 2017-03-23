#ifndef _CISCO_IOS_XR_ICPE_SDACP_OPER_
#define _CISCO_IOS_XR_ICPE_SDACP_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_icpe_sdacp_oper {

class IcpeCpmChannelResyncStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_cpm_channel_resync_state_unknown;
        static const Enum::YLeaf icpe_cpm_channel_resync_state_not_in_resync;
        static const Enum::YLeaf icpe_cpm_channel_resync_state_in_client_resync;
        static const Enum::YLeaf icpe_cpm_channel_resync_state_in_satellite_resync;

};

class IcpeCpmChanFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_cpm_chan_fsm_state_down;
        static const Enum::YLeaf icpe_cpm_chan_fsm_state_not_supported;
        static const Enum::YLeaf icpe_cpm_chan_fsm_state_closed;
        static const Enum::YLeaf icpe_cpm_chan_fsm_state_opening;
        static const Enum::YLeaf icpe_cpm_chan_fsm_state_opened;
        static const Enum::YLeaf icpe_cpm_chan_fsm_state_open;

};

class DpmProtoHostStateEnum : public Enum
{
    public:
        static const Enum::YLeaf dpm_proto_host_state_idle;
        static const Enum::YLeaf dpm_proto_host_state_discovered;
        static const Enum::YLeaf dpm_proto_host_state_rejecting;

};

class IcpeCpmControlFsmStateEnum : public Enum
{
    public:
        static const Enum::YLeaf icpe_cpm_control_fsm_state_disconnected;
        static const Enum::YLeaf icpe_cpm_control_fsm_state_connecting;
        static const Enum::YLeaf icpe_cpm_control_fsm_state_authenticating;
        static const Enum::YLeaf icpe_cpm_control_fsm_state_check_ing_ver;
        static const Enum::YLeaf icpe_cpm_control_fsm_state_connected;
        static const Enum::YLeaf icpe_cpm_control_fsm_state_issu;

};

class DpmProtoStateEnum : public Enum
{
    public:
        static const Enum::YLeaf dpm_proto_state_idle;
        static const Enum::YLeaf dpm_proto_state_probing;
        static const Enum::YLeaf dpm_proto_state_legacy;
        static const Enum::YLeaf dpm_proto_state_configuring;
        static const Enum::YLeaf dpm_proto_state_discovered;
        static const Enum::YLeaf dpm_proto_state_rejecting;
        static const Enum::YLeaf dpm_proto_state_seen;

};


}
}

#endif /* _CISCO_IOS_XR_ICPE_SDACP_OPER_ */

