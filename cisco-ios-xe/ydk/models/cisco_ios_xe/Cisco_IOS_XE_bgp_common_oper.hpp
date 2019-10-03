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

        static int get_enum_value(const std::string & name) {
            if (name == "closed") return 0;
            if (name == "listen") return 1;
            if (name == "synsent") return 2;
            if (name == "synrcvd") return 3;
            if (name == "established") return 4;
            if (name == "finwait1") return 5;
            if (name == "finwait2") return 6;
            if (name == "closewait") return 7;
            if (name == "lastack") return 8;
            if (name == "closing") return 9;
            if (name == "timewait") return 10;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "ipv4-mdt") return 0;
            if (name == "ipv4-multicast") return 1;
            if (name == "ipv4-unicast") return 2;
            if (name == "ipv4-mvpn") return 3;
            if (name == "ipv4-flowspec") return 4;
            if (name == "ipv6-multicast") return 5;
            if (name == "ipv6-unicast") return 6;
            if (name == "ipv6-mvpn") return 7;
            if (name == "ipv6-flowspec") return 8;
            if (name == "l2vpn-vpls") return 9;
            if (name == "l2vpn-e-vpn") return 10;
            if (name == "nsap-unicast") return 11;
            if (name == "rtfilter-unicast") return 12;
            if (name == "vpnv4-multicast") return 13;
            if (name == "vpnv4-unicast") return 14;
            if (name == "vpnv6-unicast") return 15;
            if (name == "vpnv6-multicast") return 16;
            if (name == "vpnv4-flowspec") return 17;
            if (name == "vpnv6-flowspec") return 18;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XE_BGP_COMMON_OPER_ */

