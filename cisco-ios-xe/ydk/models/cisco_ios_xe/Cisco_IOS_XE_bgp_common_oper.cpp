
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_bgp_common_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_common_oper {

const Enum::YLeaf TcpFsmState::closed {0, "closed"};
const Enum::YLeaf TcpFsmState::listen {1, "listen"};
const Enum::YLeaf TcpFsmState::synsent {2, "synsent"};
const Enum::YLeaf TcpFsmState::synrcvd {3, "synrcvd"};
const Enum::YLeaf TcpFsmState::established {4, "established"};
const Enum::YLeaf TcpFsmState::finwait1 {5, "finwait1"};
const Enum::YLeaf TcpFsmState::finwait2 {6, "finwait2"};
const Enum::YLeaf TcpFsmState::closewait {7, "closewait"};
const Enum::YLeaf TcpFsmState::lastack {8, "lastack"};
const Enum::YLeaf TcpFsmState::closing {9, "closing"};
const Enum::YLeaf TcpFsmState::timewait {10, "timewait"};

const Enum::YLeaf AfiSafi::ipv4_mdt {0, "ipv4-mdt"};
const Enum::YLeaf AfiSafi::ipv4_multicast {1, "ipv4-multicast"};
const Enum::YLeaf AfiSafi::ipv4_unicast {2, "ipv4-unicast"};
const Enum::YLeaf AfiSafi::ipv4_mvpn {3, "ipv4-mvpn"};
const Enum::YLeaf AfiSafi::ipv4_flowspec {4, "ipv4-flowspec"};
const Enum::YLeaf AfiSafi::ipv6_multicast {5, "ipv6-multicast"};
const Enum::YLeaf AfiSafi::ipv6_unicast {6, "ipv6-unicast"};
const Enum::YLeaf AfiSafi::ipv6_mvpn {7, "ipv6-mvpn"};
const Enum::YLeaf AfiSafi::ipv6_flowspec {8, "ipv6-flowspec"};
const Enum::YLeaf AfiSafi::l2vpn_vpls {9, "l2vpn-vpls"};
const Enum::YLeaf AfiSafi::l2vpn_e_vpn {10, "l2vpn-e-vpn"};
const Enum::YLeaf AfiSafi::nsap_unicast {11, "nsap-unicast"};
const Enum::YLeaf AfiSafi::rtfilter_unicast {12, "rtfilter-unicast"};
const Enum::YLeaf AfiSafi::vpnv4_multicast {13, "vpnv4-multicast"};
const Enum::YLeaf AfiSafi::vpnv4_unicast {14, "vpnv4-unicast"};
const Enum::YLeaf AfiSafi::vpnv6_unicast {15, "vpnv6-unicast"};
const Enum::YLeaf AfiSafi::vpnv6_multicast {16, "vpnv6-multicast"};
const Enum::YLeaf AfiSafi::vpnv4_flowspec {17, "vpnv4-flowspec"};
const Enum::YLeaf AfiSafi::vpnv6_flowspec {18, "vpnv6-flowspec"};


}
}

