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
        static const Enum::Value critical;
        static const Enum::Value flash;
        static const Enum::Value flash_override;
        static const Enum::Value immediate;
        static const Enum::Value internet;
        static const Enum::Value network;
        static const Enum::Value priority;
        static const Enum::Value routine;

};

class LptsFlowEnum : public Enum
{
    public:
        static const Enum::Value config_default;
        static const Enum::Value l2tpv2_fragment;
        static const Enum::Value fragment;
        static const Enum::Value ospf_multicast_known;
        static const Enum::Value ospf_multicast_default;
        static const Enum::Value ospf_unicast_known;
        static const Enum::Value ospf_unicast_default;
        static const Enum::Value isis_known;
        static const Enum::Value isis_default;
        static const Enum::Value bfd_known;
        static const Enum::Value bfd_default;
        static const Enum::Value bfd_multipath_known;
        static const Enum::Value bfd_multipath0;
        static const Enum::Value bfd_blb_known;
        static const Enum::Value bfd_blb0;
        static const Enum::Value bfd_sp0;
        static const Enum::Value bgp_known;
        static const Enum::Value bgp_config_peer;
        static const Enum::Value bgp_default;
        static const Enum::Value pim_multicast_default;
        static const Enum::Value pim_multicast_known;
        static const Enum::Value pim_unicast;
        static const Enum::Value igmp;
        static const Enum::Value icmp_local;
        static const Enum::Value icmp_app;
        static const Enum::Value icmp_control;
        static const Enum::Value icmp_default;
        static const Enum::Value icmp_app_default;
        static const Enum::Value ldp_tcp_known;
        static const Enum::Value ldp_tcp_config_peer;
        static const Enum::Value ldp_tcp_default;
        static const Enum::Value ldp_udp;
        static const Enum::Value all_routers;
        static const Enum::Value lmp_tcp_known;
        static const Enum::Value lmp_tcp_config_peer;
        static const Enum::Value lmp_tcp_default;
        static const Enum::Value lmp_udp;
        static const Enum::Value rsvp_udp;
        static const Enum::Value rsvp_default;
        static const Enum::Value rsvp_known;
        static const Enum::Value ike;
        static const Enum::Value ipsec_known;
        static const Enum::Value ipsec_default;
        static const Enum::Value ipsec_fragment;
        static const Enum::Value msdp_known;
        static const Enum::Value msdp_config_peer;
        static const Enum::Value msdp_default;
        static const Enum::Value snmp;
        static const Enum::Value ssh_known;
        static const Enum::Value ssh_default;
        static const Enum::Value http_known;
        static const Enum::Value http_default;
        static const Enum::Value shttp_known;
        static const Enum::Value shttp_default;
        static const Enum::Value telnet_known;
        static const Enum::Value telnet_default;
        static const Enum::Value css_known;
        static const Enum::Value css_default;
        static const Enum::Value rsh_known;
        static const Enum::Value rsh_default;
        static const Enum::Value udp_known;
        static const Enum::Value udp_listen;
        static const Enum::Value udp_config_peer;
        static const Enum::Value udp_default;
        static const Enum::Value tcp_known;
        static const Enum::Value tcp_listen;
        static const Enum::Value tcp_config_peer;
        static const Enum::Value tcp_default;
        static const Enum::Value multicast_known;
        static const Enum::Value multicast_default;
        static const Enum::Value raw_listen;
        static const Enum::Value raw_default;
        static const Enum::Value ipsla;
        static const Enum::Value eigrp;
        static const Enum::Value rip;
        static const Enum::Value l2tpv3;
        static const Enum::Value pcep_tcp_default;
        static const Enum::Value gre;
        static const Enum::Value vrrp;
        static const Enum::Value hsrp;
        static const Enum::Value mpls_ping;
        static const Enum::Value l2tpv2_default;
        static const Enum::Value l2tpv2_known;
        static const Enum::Value dns;
        static const Enum::Value radius;
        static const Enum::Value tacacs;
        static const Enum::Value ntp_default;
        static const Enum::Value ntp_known;
        static const Enum::Value mobile_ipv6;
        static const Enum::Value amt;
        static const Enum::Value sdac_tcp;
        static const Enum::Value radius_coa;
        static const Enum::Value rel_udp;
        static const Enum::Value dhcp4;
        static const Enum::Value dhcp6;
        static const Enum::Value onepk;
        static const Enum::Value exr;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_ */

