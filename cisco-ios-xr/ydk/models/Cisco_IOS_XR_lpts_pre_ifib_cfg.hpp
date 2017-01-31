#ifndef _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_
#define _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_pre_ifib_cfg {


class LptsPreIFibPrecedenceNumberEnum : public Enum
{
    public:
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf routine;

};

class LptsFlowEnum : public Enum
{
    public:
        static const Enum::YLeaf config_default;
        static const Enum::YLeaf l2tpv2_fragment;
        static const Enum::YLeaf fragment;
        static const Enum::YLeaf ospf_multicast_known;
        static const Enum::YLeaf ospf_multicast_default;
        static const Enum::YLeaf ospf_unicast_known;
        static const Enum::YLeaf ospf_unicast_default;
        static const Enum::YLeaf isis_known;
        static const Enum::YLeaf isis_default;
        static const Enum::YLeaf bfd_known;
        static const Enum::YLeaf bfd_default;
        static const Enum::YLeaf bfd_multipath_known;
        static const Enum::YLeaf bfd_multipath0;
        static const Enum::YLeaf bfd_blb_known;
        static const Enum::YLeaf bfd_blb0;
        static const Enum::YLeaf bfd_sp0;
        static const Enum::YLeaf bgp_known;
        static const Enum::YLeaf bgp_config_peer;
        static const Enum::YLeaf bgp_default;
        static const Enum::YLeaf pim_multicast_default;
        static const Enum::YLeaf pim_multicast_known;
        static const Enum::YLeaf pim_unicast;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf icmp_local;
        static const Enum::YLeaf icmp_app;
        static const Enum::YLeaf icmp_control;
        static const Enum::YLeaf icmp_default;
        static const Enum::YLeaf icmp_app_default;
        static const Enum::YLeaf ldp_tcp_known;
        static const Enum::YLeaf ldp_tcp_config_peer;
        static const Enum::YLeaf ldp_tcp_default;
        static const Enum::YLeaf ldp_udp;
        static const Enum::YLeaf all_routers;
        static const Enum::YLeaf lmp_tcp_known;
        static const Enum::YLeaf lmp_tcp_config_peer;
        static const Enum::YLeaf lmp_tcp_default;
        static const Enum::YLeaf lmp_udp;
        static const Enum::YLeaf rsvp_udp;
        static const Enum::YLeaf rsvp_default;
        static const Enum::YLeaf rsvp_known;
        static const Enum::YLeaf ike;
        static const Enum::YLeaf ipsec_known;
        static const Enum::YLeaf ipsec_default;
        static const Enum::YLeaf ipsec_fragment;
        static const Enum::YLeaf msdp_known;
        static const Enum::YLeaf msdp_config_peer;
        static const Enum::YLeaf msdp_default;
        static const Enum::YLeaf snmp;
        static const Enum::YLeaf ssh_known;
        static const Enum::YLeaf ssh_default;
        static const Enum::YLeaf http_known;
        static const Enum::YLeaf http_default;
        static const Enum::YLeaf shttp_known;
        static const Enum::YLeaf shttp_default;
        static const Enum::YLeaf telnet_known;
        static const Enum::YLeaf telnet_default;
        static const Enum::YLeaf css_known;
        static const Enum::YLeaf css_default;
        static const Enum::YLeaf rsh_known;
        static const Enum::YLeaf rsh_default;
        static const Enum::YLeaf udp_known;
        static const Enum::YLeaf udp_listen;
        static const Enum::YLeaf udp_config_peer;
        static const Enum::YLeaf udp_default;
        static const Enum::YLeaf tcp_known;
        static const Enum::YLeaf tcp_listen;
        static const Enum::YLeaf tcp_config_peer;
        static const Enum::YLeaf tcp_default;
        static const Enum::YLeaf multicast_known;
        static const Enum::YLeaf multicast_default;
        static const Enum::YLeaf raw_listen;
        static const Enum::YLeaf raw_default;
        static const Enum::YLeaf ipsla;
        static const Enum::YLeaf eigrp;
        static const Enum::YLeaf rip;
        static const Enum::YLeaf l2tpv3;
        static const Enum::YLeaf pcep_tcp_default;
        static const Enum::YLeaf gre;
        static const Enum::YLeaf vrrp;
        static const Enum::YLeaf hsrp;
        static const Enum::YLeaf mpls_ping;
        static const Enum::YLeaf l2tpv2_default;
        static const Enum::YLeaf l2tpv2_known;
        static const Enum::YLeaf dns;
        static const Enum::YLeaf radius;
        static const Enum::YLeaf tacacs;
        static const Enum::YLeaf ntp_default;
        static const Enum::YLeaf ntp_known;
        static const Enum::YLeaf mobile_ipv6;
        static const Enum::YLeaf amt;
        static const Enum::YLeaf sdac_tcp;
        static const Enum::YLeaf radius_coa;
        static const Enum::YLeaf rel_udp;
        static const Enum::YLeaf dhcp4;
        static const Enum::YLeaf dhcp6;
        static const Enum::YLeaf onepk;
        static const Enum::YLeaf exr;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_ */

