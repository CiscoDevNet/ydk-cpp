#ifndef _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_
#define _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_IDENTITY_TC_MIB {

class SubSessionIdentity : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf ifIndex;
        static const ydk::Enum::YLeaf subscriberLabel;
        static const ydk::Enum::YLeaf macAddress;
        static const ydk::Enum::YLeaf nativeVrf;
        static const ydk::Enum::YLeaf nativeIpAddress;
        static const ydk::Enum::YLeaf domainVrf;
        static const ydk::Enum::YLeaf domainIpAddress;
        static const ydk::Enum::YLeaf pbhk;
        static const ydk::Enum::YLeaf remoteId;
        static const ydk::Enum::YLeaf circuitId;
        static const ydk::Enum::YLeaf nasPort;
        static const ydk::Enum::YLeaf domain;
        static const ydk::Enum::YLeaf username;
        static const ydk::Enum::YLeaf acctSessionId;
        static const ydk::Enum::YLeaf dnis;
        static const ydk::Enum::YLeaf media;
        static const ydk::Enum::YLeaf mlpNegotiated;
        static const ydk::Enum::YLeaf protocol;
        static const ydk::Enum::YLeaf serviceName;
        static const ydk::Enum::YLeaf dhcpClass;
        static const ydk::Enum::YLeaf tunnelName;

};

class SubscriberProtocolType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf atom;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf psdn;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf vpdn;

};

class SubscriberMediaType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf async;
        static const ydk::Enum::YLeaf atm;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ip;
        static const ydk::Enum::YLeaf isdn;
        static const ydk::Enum::YLeaf mpls;
        static const ydk::Enum::YLeaf sync;

};


}
}

#endif /* _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_ */

