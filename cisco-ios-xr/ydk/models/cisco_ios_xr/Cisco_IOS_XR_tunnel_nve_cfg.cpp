
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_nve_cfg.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_nve_cfg {

const Enum::YLeaf HostReachProtocol::bgp {1, "bgp"};

const Enum::YLeaf VxlanUdpPortEnum::ietf_udp_port {4789, "ietf-udp-port"};
const Enum::YLeaf VxlanUdpPortEnum::ivx_lan_udp_port {48879, "ivx-lan-udp-port"};

const Enum::YLeaf LoadBalanceEnum::per_evi {1, "per-evi"};

const Enum::YLeaf IrProtocolEnum::bgp {1, "bgp"};

const Enum::YLeaf UnknownUnicastFloodingEnum::suppress_uuf {1, "suppress-uuf"};

const Enum::YLeaf OverlayEncapEnum::vx_lan_encapsulation {0, "vx-lan-encapsulation"};
const Enum::YLeaf OverlayEncapEnum::soft_gre_encapsulation {1, "soft-gre-encapsulation"};


}
}

