#ifndef _CISCO_SUBSCRIBER_SESSION_TC_MIB_
#define _CISCO_SUBSCRIBER_SESSION_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_SESSION_TC_MIB {

class SubSessionType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf all;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf pppSubscriber;
        static const ydk::Enum::YLeaf pppoeSubscriber;
        static const ydk::Enum::YLeaf l2tpSubscriber;
        static const ydk::Enum::YLeaf l2fSubscriber;
        static const ydk::Enum::YLeaf ipInterfaceSubscriber;
        static const ydk::Enum::YLeaf ipPktSubscriber;
        static const ydk::Enum::YLeaf ipDhcpv4Subscriber;
        static const ydk::Enum::YLeaf ipRadiusSubscriber;
        static const ydk::Enum::YLeaf l2MacSubscriber;
        static const ydk::Enum::YLeaf l2Dhcpv4Subscriber;
        static const ydk::Enum::YLeaf l2RadiusSubscriber;

};

class SubSessionRedundancyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

};

class SubSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf up;

};


}
}

#endif /* _CISCO_SUBSCRIBER_SESSION_TC_MIB_ */

