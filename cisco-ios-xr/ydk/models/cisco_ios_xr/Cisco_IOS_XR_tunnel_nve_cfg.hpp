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

        static int get_enum_value(const std::string & name) {
            if (name == "bgp") return 1;
            return -1;
        }
};

class VxlanUdpPortEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ietf_udp_port;
        static const ydk::Enum::YLeaf ivx_lan_udp_port;

        static int get_enum_value(const std::string & name) {
            if (name == "ietf-udp-port") return 4789;
            if (name == "ivx-lan-udp-port") return 48879;
            return -1;
        }
};

class LoadBalanceEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf per_evi;

        static int get_enum_value(const std::string & name) {
            if (name == "per-evi") return 1;
            return -1;
        }
};

class IrProtocolEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf bgp;

        static int get_enum_value(const std::string & name) {
            if (name == "bgp") return 1;
            return -1;
        }
};

class UnknownUnicastFloodingEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf suppress_uuf;

        static int get_enum_value(const std::string & name) {
            if (name == "suppress-uuf") return 1;
            return -1;
        }
};

class OverlayEncapEnum : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf vx_lan_encapsulation;
        static const ydk::Enum::YLeaf soft_gre_encapsulation;

        static int get_enum_value(const std::string & name) {
            if (name == "vx-lan-encapsulation") return 0;
            if (name == "soft-gre-encapsulation") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_TUNNEL_NVE_CFG_ */

