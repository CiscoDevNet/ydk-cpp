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

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_ */

