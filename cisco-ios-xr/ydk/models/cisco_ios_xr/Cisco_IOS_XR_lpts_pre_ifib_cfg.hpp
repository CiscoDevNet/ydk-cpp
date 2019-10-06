#ifndef _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_
#define _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_pre_ifib_cfg {

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

        static int get_enum_value(const std::string & name) {
            if (name == "critical") return 5;
            if (name == "flash") return 3;
            if (name == "flash-override") return 4;
            if (name == "immediate") return 2;
            if (name == "internet") return 6;
            if (name == "network") return 7;
            if (name == "priority") return 1;
            if (name == "routine") return 0;
            return -1;
        }
};

class Lptsafi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "config-default") return 0;
            if (name == "l2tpv2-fragment") return 1;
            if (name == "fragment") return 2;
            if (name == "ospf-multicast-known") return 3;
            if (name == "ospf-multicast-default") return 4;
            if (name == "ospf-unicast-known") return 5;
            if (name == "ospf-unicast-default") return 6;
            if (name == "isis-known") return 7;
            if (name == "isis-default") return 8;
            if (name == "bfd-known") return 9;
            if (name == "bfd-default") return 10;
            if (name == "bfd-multipath-known") return 11;
            if (name == "bfd-multipath0") return 12;
            if (name == "bfd-blb-known") return 13;
            if (name == "bfd-blb0") return 14;
            if (name == "bfd-sp0") return 15;
            if (name == "bgp-known") return 16;
            if (name == "bgp-config-peer") return 17;
            if (name == "bgp-default") return 18;
            if (name == "pim-multicast-default") return 19;
            if (name == "pim-multicast-known") return 20;
            if (name == "pim-unicast") return 21;
            if (name == "igmp") return 22;
            if (name == "icmp-local") return 23;
            if (name == "icmp-app") return 24;
            if (name == "icmp-control") return 25;
            if (name == "icmp-default") return 26;
            if (name == "icmp-app-default") return 27;
            if (name == "ldp-tcp-known") return 28;
            if (name == "ldp-tcp-config-peer") return 29;
            if (name == "ldp-tcp-default") return 30;
            if (name == "ldp-udp") return 31;
            if (name == "all-routers") return 32;
            if (name == "lmp-tcp-known") return 33;
            if (name == "lmp-tcp-config-peer") return 34;
            if (name == "lmp-tcp-default") return 35;
            if (name == "lmp-udp") return 36;
            if (name == "rsvp-udp") return 37;
            if (name == "rsvp-default") return 38;
            if (name == "rsvp-known") return 39;
            if (name == "ike") return 40;
            if (name == "ipsec-known") return 41;
            if (name == "ipsec-default") return 42;
            if (name == "ipsec-fragment") return 43;
            if (name == "msdp-known") return 44;
            if (name == "msdp-config-peer") return 45;
            if (name == "msdp-default") return 46;
            if (name == "snmp") return 47;
            if (name == "ssh-known") return 48;
            if (name == "ssh-default") return 49;
            if (name == "http-known") return 50;
            if (name == "http-default") return 51;
            if (name == "shttp-known") return 52;
            if (name == "shttp-default") return 53;
            if (name == "telnet-known") return 54;
            if (name == "telnet-default") return 55;
            if (name == "css-known") return 56;
            if (name == "css-default") return 57;
            if (name == "rsh-known") return 58;
            if (name == "rsh-default") return 59;
            if (name == "udp-known") return 60;
            if (name == "udp-listen") return 61;
            if (name == "udp-config-peer") return 62;
            if (name == "udp-default") return 63;
            if (name == "tcp-known") return 64;
            if (name == "tcp-listen") return 65;
            if (name == "tcp-config-peer") return 66;
            if (name == "tcp-default") return 67;
            if (name == "multicast-known") return 68;
            if (name == "multicast-default") return 69;
            if (name == "raw-listen") return 70;
            if (name == "raw-default") return 71;
            if (name == "ipsla") return 72;
            if (name == "eigrp") return 73;
            if (name == "rip") return 74;
            if (name == "l2tpv3") return 75;
            if (name == "pcep-tcp-default") return 76;
            if (name == "gre") return 77;
            if (name == "vrrp") return 78;
            if (name == "hsrp") return 79;
            if (name == "mpls-ping") return 80;
            if (name == "l2tpv2-default") return 81;
            if (name == "l2tpv2-known") return 82;
            if (name == "dns") return 83;
            if (name == "radius") return 84;
            if (name == "tacacs") return 85;
            if (name == "ntp-default") return 86;
            if (name == "ntp-known") return 87;
            if (name == "mobile-ipv6") return 88;
            if (name == "amt") return 89;
            if (name == "sdac-tcp") return 90;
            if (name == "radius-coa") return 91;
            if (name == "rel-udp") return 92;
            if (name == "dhcp4") return 93;
            if (name == "dhcp6") return 94;
            if (name == "onepk") return 95;
            if (name == "exr") return 96;
            if (name == "bob-ietf") return 97;
            if (name == "xipc-throt") return 98;
            if (name == "platform-limit") return 99;
            return -1;
        }
};

class LptsDynamicFlowConfig : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf flows_config;
        static const ydk::Enum::YLeaf platform_config;

        static int get_enum_value(const std::string & name) {
            if (name == "flows-config") return 0;
            if (name == "platform-config") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PRE_IFIB_CFG_ */

