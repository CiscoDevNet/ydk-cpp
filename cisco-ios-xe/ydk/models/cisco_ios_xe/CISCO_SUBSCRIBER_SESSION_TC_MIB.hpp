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

        static int get_enum_value(const std::string & name) {
            if (name == "all") return 1;
            if (name == "other") return 2;
            if (name == "pppSubscriber") return 3;
            if (name == "pppoeSubscriber") return 4;
            if (name == "l2tpSubscriber") return 5;
            if (name == "l2fSubscriber") return 6;
            if (name == "ipInterfaceSubscriber") return 7;
            if (name == "ipPktSubscriber") return 8;
            if (name == "ipDhcpv4Subscriber") return 9;
            if (name == "ipRadiusSubscriber") return 10;
            if (name == "l2MacSubscriber") return 11;
            if (name == "l2Dhcpv4Subscriber") return 12;
            if (name == "l2RadiusSubscriber") return 13;
            return -1;
        }
};

class SubSessionRedundancyMode : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf standby;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 1;
            if (name == "other") return 2;
            if (name == "active") return 3;
            if (name == "standby") return 4;
            return -1;
        }
};

class SubSessionState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf pending;
        static const ydk::Enum::YLeaf up;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "pending") return 2;
            if (name == "up") return 3;
            return -1;
        }
};


}
}

#endif /* _CISCO_SUBSCRIBER_SESSION_TC_MIB_ */

