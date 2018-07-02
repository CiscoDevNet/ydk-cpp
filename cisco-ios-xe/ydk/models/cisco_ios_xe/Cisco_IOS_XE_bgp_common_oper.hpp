#ifndef _CISCO_IOS_XE_BGP_COMMON_OPER_
#define _CISCO_IOS_XE_BGP_COMMON_OPER_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_common_oper {

class TcpFsmState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf closed;
        static const ydk::Enum::YLeaf listen;
        static const ydk::Enum::YLeaf synsent;
        static const ydk::Enum::YLeaf synrcvd;
        static const ydk::Enum::YLeaf established;
        static const ydk::Enum::YLeaf finwait1;
        static const ydk::Enum::YLeaf finwait2;
        static const ydk::Enum::YLeaf closewait;
        static const ydk::Enum::YLeaf lastack;
        static const ydk::Enum::YLeaf closing;
        static const ydk::Enum::YLeaf timewait;

};

class AfiSafi : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ipv4_mdt;
        static const ydk::Enum::YLeaf ipv4_multicast;
        static const ydk::Enum::YLeaf ipv4_unicast;
        static const ydk::Enum::YLeaf ipv4_mvpn;
        static const ydk::Enum::YLeaf ipv4_flowspec;
        static const ydk::Enum::YLeaf ipv6_multicast;
        static const ydk::Enum::YLeaf ipv6_unicast;
        static const ydk::Enum::YLeaf ipv6_mvpn;
        static const ydk::Enum::YLeaf ipv6_flowspec;
        static const ydk::Enum::YLeaf l2vpn_vpls;
        static const ydk::Enum::YLeaf l2vpn_e_vpn;
        static const ydk::Enum::YLeaf nsap_unicast;
        static const ydk::Enum::YLeaf rtfilter_unicast;
        static const ydk::Enum::YLeaf vpnv4_multicast;
        static const ydk::Enum::YLeaf vpnv4_unicast;
        static const ydk::Enum::YLeaf vpnv6_unicast;
        static const ydk::Enum::YLeaf vpnv6_multicast;
        static const ydk::Enum::YLeaf vpnv4_flowspec;
        static const ydk::Enum::YLeaf vpnv6_flowspec;

};


}
}

#endif /* _CISCO_IOS_XE_BGP_COMMON_OPER_ */

