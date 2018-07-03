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

};

class DpmProtoHostState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf dpm_proto_host_state_idle;
        static const ydk::Enum::YLeaf dpm_proto_host_state_discovered;
        static const ydk::Enum::YLeaf dpm_proto_host_state_rejecting;

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

};


}
}

#endif /* _CISCO_IOS_XR_ICPE_SDACP_OPER_ */

