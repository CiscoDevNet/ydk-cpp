#ifndef _CISCO_IOS_XR_IPV4_BGP_DATATYPES_
#define _CISCO_IOS_XR_IPV4_BGP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_datatypes {

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

};

class BgpNbrCapAdditionalPathsCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class BgpAfAdditionalPathsCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

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

};

class BgpOfficialAddressFamily : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf l2vpn;
        static const ydk::Enum::YLeaf ls;
        static const ydk::Enum::YLeaf all;

};

class BgpAdvertiseLocalLabeledRouteCfg : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf disable;

};

class BgpUpdateFilterAction : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf treat_as_withdraw;
        static const ydk::Enum::YLeaf discard_attibute;

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

};

class BgpTos : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf precedence;
        static const ydk::Enum::YLeaf dscp;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_DATATYPES_ */

