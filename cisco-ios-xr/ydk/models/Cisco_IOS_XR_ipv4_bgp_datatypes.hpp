#ifndef _CISCO_IOS_XR_IPV4_BGP_DATATYPES_
#define _CISCO_IOS_XR_IPV4_BGP_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_datatypes {


class BgpSubsequentAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf unicast;
        static const Enum::YLeaf multicast;
        static const Enum::YLeaf labeled_unicast;
        static const Enum::YLeaf mvpn;
        static const Enum::YLeaf mspw;
        static const Enum::YLeaf tunnel;
        static const Enum::YLeaf vpls;
        static const Enum::YLeaf mdt;
        static const Enum::YLeaf vpws;
        static const Enum::YLeaf evpn;
        static const Enum::YLeaf ls;
        static const Enum::YLeaf vpn;
        static const Enum::YLeaf vpn_mcast;
        static const Enum::YLeaf rt_filter;
        static const Enum::YLeaf flowspec;
        static const Enum::YLeaf vpn_flowspec;
        static const Enum::YLeaf all;

};

class BgpNbrCapAdditionalPathsCfgEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class BgpOfficialAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf l2vpn;
        static const Enum::YLeaf ls;
        static const Enum::YLeaf all;

};

class BgpafAdditionalPathsCfgEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf disable;

};

class BgpTosEnum : public Enum
{
    public:
        static const Enum::YLeaf precedence;
        static const Enum::YLeaf dscp;

};

class BgpAddressFamilyEnum : public Enum
{
    public:
        static const Enum::YLeaf ipv4_unicast;
        static const Enum::YLeaf ipv4_multicast;
        static const Enum::YLeaf ipv4_labeled_unicast;
        static const Enum::YLeaf ipv4_tunnel;
        static const Enum::YLeaf vp_nv4_unicast;
        static const Enum::YLeaf ipv6_unicast;
        static const Enum::YLeaf ipv6_multicast;
        static const Enum::YLeaf ipv6_labeled_unicast;
        static const Enum::YLeaf vp_nv6_unicast;
        static const Enum::YLeaf ipv4mdt;
        static const Enum::YLeaf l2vpnvpls;
        static const Enum::YLeaf ipv4rt_constraint;
        static const Enum::YLeaf ipv4mvpn;
        static const Enum::YLeaf ipv6mvpn;
        static const Enum::YLeaf l2vpnevpn;
        static const Enum::YLeaf lsls;
        static const Enum::YLeaf vp_nv4_multicast;
        static const Enum::YLeaf vp_nv6_multicast;
        static const Enum::YLeaf ipv4_flowspec;
        static const Enum::YLeaf ipv6_flowspec;
        static const Enum::YLeaf vp_nv4_flowspec;
        static const Enum::YLeaf vp_nv6_flowspec;
        static const Enum::YLeaf l2vpnmspw;
        static const Enum::YLeaf all_address_family;

};

class BgpPrecedenceDscpEnum : public Enum
{
    public:
        static const Enum::YLeaf af11;
        static const Enum::YLeaf af12;
        static const Enum::YLeaf af13;
        static const Enum::YLeaf af21;
        static const Enum::YLeaf af22;
        static const Enum::YLeaf af23;
        static const Enum::YLeaf af31;
        static const Enum::YLeaf af32;
        static const Enum::YLeaf af33;
        static const Enum::YLeaf af41;
        static const Enum::YLeaf af42;
        static const Enum::YLeaf af43;
        static const Enum::YLeaf cs1;
        static const Enum::YLeaf cs2;
        static const Enum::YLeaf cs3;
        static const Enum::YLeaf cs4;
        static const Enum::YLeaf cs5;
        static const Enum::YLeaf cs6;
        static const Enum::YLeaf cs7;
        static const Enum::YLeaf ef;
        static const Enum::YLeaf critical;
        static const Enum::YLeaf flash;
        static const Enum::YLeaf flash_override;
        static const Enum::YLeaf immediate;
        static const Enum::YLeaf internet;
        static const Enum::YLeaf network;
        static const Enum::YLeaf priority;
        static const Enum::YLeaf default_or_routine;

};

class BgpUpdateFilterActionEnum : public Enum
{
    public:
        static const Enum::YLeaf treat_as_withdraw;
        static const Enum::YLeaf discard_attibute;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_DATATYPES_ */

