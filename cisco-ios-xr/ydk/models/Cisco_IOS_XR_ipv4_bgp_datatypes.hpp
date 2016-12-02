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
        static const Enum::Value unicast;
        static const Enum::Value multicast;
        static const Enum::Value labeled_unicast;
        static const Enum::Value mvpn;
        static const Enum::Value mspw;
        static const Enum::Value tunnel;
        static const Enum::Value vpls;
        static const Enum::Value mdt;
        static const Enum::Value vpws;
        static const Enum::Value evpn;
        static const Enum::Value ls;
        static const Enum::Value vpn;
        static const Enum::Value vpn_mcast;
        static const Enum::Value rt_filter;
        static const Enum::Value flowspec;
        static const Enum::Value vpn_flowspec;
        static const Enum::Value all;

};

class BgpNbrCapAdditionalPathsCfgEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};

class BgpOfficialAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4;
        static const Enum::Value ipv6;
        static const Enum::Value l2vpn;
        static const Enum::Value ls;
        static const Enum::Value all;

};

class BgpafAdditionalPathsCfgEnum : public Enum
{
    public:
        static const Enum::Value enable;
        static const Enum::Value disable;

};

class BgpTosEnum : public Enum
{
    public:
        static const Enum::Value precedence;
        static const Enum::Value dscp;

};

class BgpAddressFamilyEnum : public Enum
{
    public:
        static const Enum::Value ipv4_unicast;
        static const Enum::Value ipv4_multicast;
        static const Enum::Value ipv4_labeled_unicast;
        static const Enum::Value ipv4_tunnel;
        static const Enum::Value vp_nv4_unicast;
        static const Enum::Value ipv6_unicast;
        static const Enum::Value ipv6_multicast;
        static const Enum::Value ipv6_labeled_unicast;
        static const Enum::Value vp_nv6_unicast;
        static const Enum::Value ipv4mdt;
        static const Enum::Value l2vpnvpls;
        static const Enum::Value ipv4rt_constraint;
        static const Enum::Value ipv4mvpn;
        static const Enum::Value ipv6mvpn;
        static const Enum::Value l2vpnevpn;
        static const Enum::Value lsls;
        static const Enum::Value vp_nv4_multicast;
        static const Enum::Value vp_nv6_multicast;
        static const Enum::Value ipv4_flowspec;
        static const Enum::Value ipv6_flowspec;
        static const Enum::Value vp_nv4_flowspec;
        static const Enum::Value vp_nv6_flowspec;
        static const Enum::Value l2vpnmspw;
        static const Enum::Value all_address_family;

};

class BgpPrecedenceDscpEnum : public Enum
{
    public:
        static const Enum::Value af11;
        static const Enum::Value af12;
        static const Enum::Value af13;
        static const Enum::Value af21;
        static const Enum::Value af22;
        static const Enum::Value af23;
        static const Enum::Value af31;
        static const Enum::Value af32;
        static const Enum::Value af33;
        static const Enum::Value af41;
        static const Enum::Value af42;
        static const Enum::Value af43;
        static const Enum::Value cs1;
        static const Enum::Value cs2;
        static const Enum::Value cs3;
        static const Enum::Value cs4;
        static const Enum::Value cs5;
        static const Enum::Value cs6;
        static const Enum::Value cs7;
        static const Enum::Value ef;
        static const Enum::Value critical;
        static const Enum::Value flash;
        static const Enum::Value flash_override;
        static const Enum::Value immediate;
        static const Enum::Value internet;
        static const Enum::Value network;
        static const Enum::Value priority;
        static const Enum::Value default_or_routine;

};

class BgpUpdateFilterActionEnum : public Enum
{
    public:
        static const Enum::Value treat_as_withdraw;
        static const Enum::Value discard_attibute;

};


}
}

#endif /* _CISCO_IOS_XR_IPV4_BGP_DATATYPES_ */

