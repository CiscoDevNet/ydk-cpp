#ifndef _CISCO_SUBSCRIBER_SESSION_TC_MIB_
#define _CISCO_SUBSCRIBER_SESSION_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_SUBSCRIBER_SESSION_TC_MIB {

class SubsessiontypeEnum : public Enum
{
    public:
        static const Enum::YLeaf all;
        static const Enum::YLeaf other;
        static const Enum::YLeaf pppSubscriber;
        static const Enum::YLeaf pppoeSubscriber;
        static const Enum::YLeaf l2tpSubscriber;
        static const Enum::YLeaf l2fSubscriber;
        static const Enum::YLeaf ipInterfaceSubscriber;
        static const Enum::YLeaf ipPktSubscriber;
        static const Enum::YLeaf ipDhcpv4Subscriber;
        static const Enum::YLeaf ipRadiusSubscriber;
        static const Enum::YLeaf l2MacSubscriber;
        static const Enum::YLeaf l2Dhcpv4Subscriber;
        static const Enum::YLeaf l2RadiusSubscriber;

};

class SubsessionredundancymodeEnum : public Enum
{
    public:
        static const Enum::YLeaf none;
        static const Enum::YLeaf other;
        static const Enum::YLeaf active;
        static const Enum::YLeaf standby;

};

class SubsessionstateEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf pending;
        static const Enum::YLeaf up;

};


}
}

#endif /* _CISCO_SUBSCRIBER_SESSION_TC_MIB_ */

