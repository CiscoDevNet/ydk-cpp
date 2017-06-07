#ifndef _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_
#define _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_SUBSCRIBER_IDENTITY_TC_MIB {

class SubscribermediatypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf async;
        static const Enum::YLeaf atm;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf isdn;
        static const Enum::YLeaf mpls;
        static const Enum::YLeaf sync;

};

class SubscriberprotocoltypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf atom;
        static const Enum::YLeaf ip;
        static const Enum::YLeaf psdn;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf vpdn;

};

class SubsessionidentityEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf ifIndex;
        static const Enum::YLeaf subscriberLabel;
        static const Enum::YLeaf macAddress;
        static const Enum::YLeaf nativeVrf;
        static const Enum::YLeaf nativeIpAddress;
        static const Enum::YLeaf domainVrf;
        static const Enum::YLeaf domainIpAddress;
        static const Enum::YLeaf pbhk;
        static const Enum::YLeaf remoteId;
        static const Enum::YLeaf circuitId;
        static const Enum::YLeaf nasPort;
        static const Enum::YLeaf domain;
        static const Enum::YLeaf username;
        static const Enum::YLeaf acctSessionId;
        static const Enum::YLeaf dnis;
        static const Enum::YLeaf media;
        static const Enum::YLeaf mlpNegotiated;
        static const Enum::YLeaf protocol;
        static const Enum::YLeaf serviceName;
        static const Enum::YLeaf dhcpClass;
        static const Enum::YLeaf tunnelName;

};


}
}

#endif /* _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_ */

