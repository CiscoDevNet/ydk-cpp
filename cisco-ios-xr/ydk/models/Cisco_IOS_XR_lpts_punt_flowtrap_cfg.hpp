#ifndef _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_
#define _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_

#include <memory>
#include <vector>
#include <string>
#include "ydk/types.hpp"
#include "ydk/errors.hpp"

namespace ydk {
namespace Cisco_IOS_XR_lpts_punt_flowtrap_cfg {


class LptsPuntFlowtrapProtoIdEnum : public Enum
{
    public:
        static const Enum::Value default_;
        static const Enum::Value arp;
        static const Enum::Value icmp;
        static const Enum::Value dhcp;
        static const Enum::Value pppoe;
        static const Enum::Value ppp;
        static const Enum::Value igmp;
        static const Enum::Value ipv4;
        static const Enum::Value l2tp;
        static const Enum::Value unclassified;

};


}
}

#endif /* _CISCO_IOS_XR_LPTS_PUNT_FLOWTRAP_CFG_ */

