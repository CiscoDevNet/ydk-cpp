#ifndef _CISCO_IOS_XR_TUNNEL_NVE_CFG_
#define _CISCO_IOS_XR_TUNNEL_NVE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_nve_cfg {

class HostReachProtocol : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;

};

class VxlanUdpPortEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf_udp_port;
        static const ydk::Enum::YLeaf ivx_lan_udp_port;

};

class OverlayEncapEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vx_lan_encapsulation;
        static const ydk::Enum::YLeaf soft_gre_encapsulation;

};

class UnknownUnicastFloodingEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf suppress_uuf;

};

class LoadBalanceEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_evi;

};

class IrProtocolEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_NVE_CFG_ */

