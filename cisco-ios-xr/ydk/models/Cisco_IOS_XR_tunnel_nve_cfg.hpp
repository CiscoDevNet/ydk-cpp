#ifndef _CISCO_IOS_XR_TUNNEL_NVE_CFG_
#define _CISCO_IOS_XR_TUNNEL_NVE_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tunnel_nve_cfg {


class VxlanUdpPortEnumEnum : public Enum
{
    public:
        static const Enum::Value ietf_udp_port;
        static const Enum::Value ivx_lan_udp_port;

};

class HostReachProtocolEnum : public Enum
{
    public:
        static const Enum::Value bgp;

};

class OverlayEncapEnumEnum : public Enum
{
    public:
        static const Enum::Value vx_lan_encapsulation;
        static const Enum::Value soft_gre_encapsulation;

};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_NVE_CFG_ */

