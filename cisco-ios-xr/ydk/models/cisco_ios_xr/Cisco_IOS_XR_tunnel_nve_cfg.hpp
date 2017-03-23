#ifndef _CISCO_IOS_XR_TUNNEL_NVE_CFG_
#define _CISCO_IOS_XR_TUNNEL_NVE_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_tunnel_nve_cfg {

class HostReachProtocolEnum : public Enum
{
    public:
        static const Enum::YLeaf bgp;

};

class VxlanUdpPortEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf ietf_udp_port;
        static const Enum::YLeaf ivx_lan_udp_port;

};

class LoadBalanceEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf per_evi;

};

class UnknownUnicastFloodingEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf suppress_uuf;

};

class OverlayEncapEnumEnum : public Enum
{
    public:
        static const Enum::YLeaf vx_lan_encapsulation;
        static const Enum::YLeaf soft_gre_encapsulation;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_NVE_CFG_ */

