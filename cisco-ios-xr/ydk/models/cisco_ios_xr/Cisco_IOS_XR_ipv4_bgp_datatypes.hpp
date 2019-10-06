#ifndef _CISCO_IOS_XR_IPV4_BGP_DATATYPES_
#define _CISCO_IOS_XR_IPV4_BGP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_datatypes {

class BgpAfAdditionalPathsCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class BgpSubsequentAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unicast;
        static const ydk::Enum::YLeaf multicast;
        static const ydk::Enum::YLeaf labeled_unicast;
        static const ydk::Enum::YLeaf mvpn;
        static const ydk::Enum::YLeaf mspw;
        static const ydk::Enum::YLeaf tunnel;
        static const ydk::Enum::YLeaf vpls;
        static const ydk::Enum::YLeaf mdt;
        static const ydk::Enum::YLeaf vpws;
        static const ydk::Enum::YLeaf evpn;
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf sr_policy;
        static const ydk::Enum::YLeaf vpn;
        static const ydk::Enum::YLeaf vpn_mcast;
        static const ydk::Enum::YLeaf rt_filter;
        static const ydk::Enum::YLeaf flowspec;
        static const ydk::Enum::YLeaf vpn_flowspec;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "unicast") return 1;
            if (name == "multicast") return 2;
            if (name == "labeled-unicast") return 4;
            if (name == "mvpn") return 5;
            if (name == "mspw") return 6;
            if (name == "tunnel") return 64;
            if (name == "vpls") return 65;
            if (name == "mdt") return 66;
            if (name == "vpws") return 68;
            if (name == "evpn") return 70;
            if (name == "ls") return 71;
            if (name == "sr-policy") return 73;
            if (name == "vpn") return 128;
            if (name == "vpn-mcast") return 129;
            if (name == "rt-filter") return 132;
            if (name == "flowspec") return 133;
            if (name == "vpn-flowspec") return 134;
            if (name == "all") return 254;
            return -1;
        }
};

class BgpNbrCapAdditionalPathsCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class BgpOfficialAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf l2vpn;
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "l2vpn") return 25;
            if (name == "ls") return 16388;
            if (name == "all") return 65534;
            return -1;
        }
};

class BgpTos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf dscp;

        static int get_enum_value(const std::string & name) {
            if (name == "precedence") return 0;
            if (name == "dscp") return 1;
            return -1;
        }
};

class BgpAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_unicast;
        static const ydk::Enum::YLeaf ipv4_multicast;
        static const ydk::Enum::YLeaf ipv4_labeled_unicast;
        static const ydk::Enum::YLeaf ipv4_tunnel;
        static const ydk::Enum::YLeaf vpnv4_unicast;
        static const ydk::Enum::YLeaf ipv6_unicast;
        static const ydk::Enum::YLeaf ipv6_multicast;
        static const ydk::Enum::YLeaf ipv6_labeled_unicast;
        static const ydk::Enum::YLeaf vpnv6_unicast;
        static const ydk::Enum::YLeaf ipv4_mdt;
        static const ydk::Enum::YLeaf l2vpn_vpls;
        static const ydk::Enum::YLeaf ipv4rt_constraint;
        static const ydk::Enum::YLeaf ipv4_mvpn;
        static const ydk::Enum::YLeaf ipv6_mvpn;
        static const ydk::Enum::YLeaf l2vpn_evpn;
        static const ydk::Enum::YLeaf lsls;
        static const ydk::Enum::YLeaf vpnv4_multicast;
        static const ydk::Enum::YLeaf vpnv6_multicast;
        static const ydk::Enum::YLeaf ipv4_flowspec;
        static const ydk::Enum::YLeaf ipv6_flowspec;
        static const ydk::Enum::YLeaf vpnv4_flowspec;
        static const ydk::Enum::YLeaf vpnv6_flowspec;
        static const ydk::Enum::YLeaf l2vpn_mspw;
        static const ydk::Enum::YLeaf ipv4_sr_policy;
        static const ydk::Enum::YLeaf ipv6_sr_policy;
        static const ydk::Enum::YLeaf all_address_family;

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-unicast") return 0;
            if (name == "ipv4-multicast") return 1;
            if (name == "ipv4-labeled-unicast") return 2;
            if (name == "ipv4-tunnel") return 3;
            if (name == "vpnv4-unicast") return 4;
            if (name == "ipv6-unicast") return 5;
            if (name == "ipv6-multicast") return 6;
            if (name == "ipv6-labeled-unicast") return 7;
            if (name == "vpnv6-unicast") return 8;
            if (name == "ipv4-mdt") return 9;
            if (name == "l2vpn-vpls") return 10;
            if (name == "ipv4rt-constraint") return 11;
            if (name == "ipv4-mvpn") return 12;
            if (name == "ipv6-mvpn") return 13;
            if (name == "l2vpn-evpn") return 14;
            if (name == "lsls") return 15;
            if (name == "vpnv4-multicast") return 16;
            if (name == "vpnv6-multicast") return 17;
            if (name == "ipv4-flowspec") return 18;
            if (name == "ipv6-flowspec") return 19;
            if (name == "vpnv4-flowspec") return 20;
            if (name == "vpnv6-flowspec") return 21;
            if (name == "l2vpn-mspw") return 22;
            if (name == "ipv4-sr-policy") return 23;
            if (name == "ipv6-sr-policy") return 24;
            if (name == "all-address-family") return 25;
            return -1;
        }
};

class BgpPrecedenceDscp : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf af11;
        static const ydk::Enum::YLeaf af12;
        static const ydk::Enum::YLeaf af13;
        static const ydk::Enum::YLeaf af21;
        static const ydk::Enum::YLeaf af22;
        static const ydk::Enum::YLeaf af23;
        static const ydk::Enum::YLeaf af31;
        static const ydk::Enum::YLeaf af32;
        static const ydk::Enum::YLeaf af33;
        static const ydk::Enum::YLeaf af41;
        static const ydk::Enum::YLeaf af42;
        static const ydk::Enum::YLeaf af43;
        static const ydk::Enum::YLeaf cs1;
        static const ydk::Enum::YLeaf cs2;
        static const ydk::Enum::YLeaf cs3;
        static const ydk::Enum::YLeaf cs4;
        static const ydk::Enum::YLeaf cs5;
        static const ydk::Enum::YLeaf cs6;
        static const ydk::Enum::YLeaf cs7;
        static const ydk::Enum::YLeaf ef;
        static const ydk::Enum::YLeaf critical;
        static const ydk::Enum::YLeaf flash;
        static const ydk::Enum::YLeaf flash_override;
        static const ydk::Enum::YLeaf immediate;
        static const ydk::Enum::YLeaf internet;
        static const ydk::Enum::YLeaf network;
        static const ydk::Enum::YLeaf priority;
        static const ydk::Enum::YLeaf default_or_routine;

        static int get_enum_value(const std::string & name) {
            if (name == "af11") return 10;
            if (name == "af12") return 12;
            if (name == "af13") return 14;
            if (name == "af21") return 18;
            if (name == "af22") return 20;
            if (name == "af23") return 22;
            if (name == "af31") return 26;
            if (name == "af32") return 28;
            if (name == "af33") return 30;
            if (name == "af41") return 34;
            if (name == "af42") return 36;
            if (name == "af43") return 38;
            if (name == "cs1") return 8;
            if (name == "cs2") return 16;
            if (name == "cs3") return 24;
            if (name == "cs4") return 32;
            if (name == "cs5") return 40;
            if (name == "cs6") return 48;
            if (name == "cs7") return 56;
            if (name == "ef") return 46;
            if (name == "critical") return 5;
            if (name == "flash") return 3;
            if (name == "flash-override") return 4;
            if (name == "immediate") return 2;
            if (name == "internet") return 6;
            if (name == "network") return 7;
            if (name == "priority") return 1;
            if (name == "default-or-routine") return 0;
            return -1;
        }
};

class BgpAdvertiseLocalLabeledRouteCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class BgpUpdateFilterAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf treat_as_withdraw;
        static const ydk::Enum::YLeaf discard_attibute;

        static int get_enum_value(const std::string & name) {
            if (name == "treat-as-withdraw") return 1;
            if (name == "discard-attibute") return 2;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_DATATYPES_ */

