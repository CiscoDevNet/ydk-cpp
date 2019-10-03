#ifndef _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_
#define _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_lpts_punt_flowtrap_cfg {

class LptsPuntFlowtrapProtoId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf arp;
        static const ydk::Enum::YLeaf icmp;
        static const ydk::Enum::YLeaf dhcp;
        static const ydk::Enum::YLeaf pppoe;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf igmp;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf l2tp;
        static const ydk::Enum::YLeaf unclassified;
        static const ydk::Enum::YLeaf ospf;
        static const ydk::Enum::YLeaf bgp;
        static const ydk::Enum::YLeaf default_;

        static int get_enum_value(const std::string & name) {
            if (name == "arp") return 1;
            if (name == "icmp") return 2;
            if (name == "dhcp") return 3;
            if (name == "pppoe") return 4;
            if (name == "ppp") return 5;
            if (name == "igmp") return 6;
            if (name == "ipv4") return 7;
            if (name == "l2tp") return 8;
            if (name == "unclassified") return 9;
            if (name == "ospf") return 10;
            if (name == "bgp") return 11;
            if (name == "default") return 12;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_ */

