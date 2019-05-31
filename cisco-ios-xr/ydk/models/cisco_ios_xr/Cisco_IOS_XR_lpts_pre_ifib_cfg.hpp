#ifndef _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_
#define _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_pre_ifib_cfg {

class LptsDynamicFlowConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flows_config;
        static const ydk::Enum::YLeaf platform_config;

};

class LptsPreIFibPrecedenceNumber : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf routine;

};

class LptsFlow : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf config_default;
        static const ydk::Enum::YLeaf l2tpv2_fragment;
        static const ydk::Enum::YLeaf fragment;
        static const ydk::Enum::YLeaf ospf_multicast_known;
        static const ydk::Enum::YLeaf ospf_multicast_default;
        static const ydk::Enum::YLeaf ospf_unicast_known;
        static const ydk::Enum::YLeaf ospf_unicast_default;
        static const ydk::Enum::YLeaf isis_known;
        static const ydk::Enum::YLeaf isis_default;
        static const ydk::Enum::YLeaf bfd_known;
        static const ydk::Enum::YLeaf bfd_default;
        static const ydk::Enum::YLeaf bfd_multipath_known;
        static const ydk::Enum::YLeaf bfd_multipath0;
        static const ydk::Enum::YLeaf bfd_blb_known;
        static const ydk::Enum::YLeaf bfd_blb0;
        static const ydk::Enum::YLeaf bfd_sp0;
        static const ydk::Enum::YLeaf bgp_known;
        static const ydk::Enum::YLeaf bgp_config_peer;
        static const ydk::Enum::YLeaf bgp_default;
        static const ydk::Enum::YLeaf pim_multicast_default;
        static const ydk::Enum::YLeaf pim_multicast_known;
        static const ydk::Enum::YLeaf pim_unicast;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf icmp_local;
        static const ydk::Enum::YLeaf icmp_app;
        static const ydk::Enum::YLeaf icmp_control;
        static const ydk::Enum::YLeaf icmp_default;
        static const ydk::Enum::YLeaf icmp_app_default;
        static const ydk::Enum::YLeaf ldp_tcp_known;
        static const ydk::Enum::YLeaf ldp_tcp_config_peer;
        static const ydk::Enum::YLeaf ldp_tcp_default;
        static const ydk::Enum::YLeaf ldp_udp;
        static const ydk::Enum::YLeaf all_routers;
        static const ydk::Enum::YLeaf lmp_tcp_known;
        static const ydk::Enum::YLeaf lmp_tcp_config_peer;
        static const ydk::Enum::YLeaf lmp_tcp_default;
        static const ydk::Enum::YLeaf lmp_udp;
        static const ydk::Enum::YLeaf rsvp_udp;
        static const ydk::Enum::YLeaf rsvp_default;
        static const ydk::Enum::YLeaf rsvp_known;
        static const ydk::Enum::YLeaf ike;
        static const ydk::Enum::YLeaf ipsec_known;
        static const ydk::Enum::YLeaf ipsec_default;
        static const ydk::Enum::YLeaf ipsec_fragment;
        static const ydk::Enum::YLeaf msdp_known;
        static const ydk::Enum::YLeaf msdp_config_peer;
        static const ydk::Enum::YLeaf msdp_default;
        static const ydk::Enum::YLeaf snmp;
        static const ydk::Enum::YLeaf ssh_known;
        static const ydk::Enum::YLeaf ssh_default;
        static const ydk::Enum::YLeaf http_known;
        static const ydk::Enum::YLeaf http_default;
        static const ydk::Enum::YLeaf shttp_known;
        static const ydk::Enum::YLeaf shttp_default;
        static const ydk::Enum::YLeaf telnet_known;
        static const ydk::Enum::YLeaf telnet_default;
        static const ydk::Enum::YLeaf css_known;
        static const ydk::Enum::YLeaf css_default;
        static const ydk::Enum::YLeaf rsh_known;
        static const ydk::Enum::YLeaf rsh_default;
        static const ydk::Enum::YLeaf udp_known;
        static const ydk::Enum::YLeaf udp_listen;
        static const ydk::Enum::YLeaf udp_config_peer;
        static const ydk::Enum::YLeaf udp_default;
        static const ydk::Enum::YLeaf tcp_known;
        static const ydk::Enum::YLeaf tcp_listen;
        static const ydk::Enum::YLeaf tcp_config_peer;
        static const ydk::Enum::YLeaf tcp_default;
        static const ydk::Enum::YLeaf multicast_known;
        static const ydk::Enum::YLeaf multicast_default;
        static const ydk::Enum::YLeaf raw_listen;
        static const ydk::Enum::YLeaf raw_default;
        static const ydk::Enum::YLeaf ipsla;
        static const ydk::Enum::YLeaf eigrp;
        static const ydk::Enum::YLeaf rip;
        static const ydk::Enum::YLeaf l2tpv3;
        static const ydk::Enum::YLeaf pcep_tcp_default;
        static const ydk::Enum::YLeaf gre;
        static const ydk::Enum::YLeaf vrrp;
        static const ydk::Enum::YLeaf hsrp;
        static const ydk::Enum::YLeaf mpls_ping;
        static const ydk::Enum::YLeaf l2tpv2_default;
        static const ydk::Enum::YLeaf l2tpv2_known;
        static const ydk::Enum::YLeaf dns;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs;
        static const ydk::Enum::YLeaf ntp_default;
        static const ydk::Enum::YLeaf ntp_known;
        static const ydk::Enum::YLeaf mobile_ipv6;
        static const ydk::Enum::YLeaf amt;
        static const ydk::Enum::YLeaf sdac_tcp;
        static const ydk::Enum::YLeaf radius_coa;
        static const ydk::Enum::YLeaf rel_udp;
        static const ydk::Enum::YLeaf dhcp4;
        static const ydk::Enum::YLeaf dhcp6;
        static const ydk::Enum::YLeaf onepk;
        static const ydk::Enum::YLeaf exr;
        static const ydk::Enum::YLeaf bob_ietf;
        static const ydk::Enum::YLeaf xipc_throt;
        static const ydk::Enum::YLeaf platform_limit;

};

class Lptsafi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_ */

