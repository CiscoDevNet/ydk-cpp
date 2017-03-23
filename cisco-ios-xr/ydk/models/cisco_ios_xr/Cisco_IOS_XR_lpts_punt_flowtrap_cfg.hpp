#ifndef _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_
#define _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace Cisco_IOS_XR_lpts_punt_flowtrap_cfg {

class LptsPuntFlowtrapProtoIdEnum : public Enum
{
    public:
        static const Enum::YLeaf arp;
        static const Enum::YLeaf icmp;
        static const Enum::YLeaf dhcp;
        static const Enum::YLeaf pppoe;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf igmp;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf l2tp;
        static const Enum::YLeaf unclassified;
        static const Enum::YLeaf ospf;
        static const Enum::YLeaf bgp;
        static const Enum::YLeaf default_;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_ */

