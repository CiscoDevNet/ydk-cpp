#ifndef _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_
#define _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_SUBSCRIBER_IDENTITY_TC_MIB {

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

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "async") return 2;
            if (name == "atm") return 3;
            if (name == "ethernet") return 4;
            if (name == "ip") return 5;
            if (name == "isdn") return 6;
            if (name == "mpls") return 7;
            if (name == "sync") return 8;
            return -1;
        }
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

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "atom") return 2;
            if (name == "ip") return 3;
            if (name == "psdn") return 4;
            if (name == "ppp") return 5;
            if (name == "vpdn") return 6;
            return -1;
        }
};

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

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "ifIndex") return 2;
            if (name == "subscriberLabel") return 3;
            if (name == "macAddress") return 4;
            if (name == "nativeVrf") return 5;
            if (name == "nativeIpAddress") return 6;
            if (name == "domainVrf") return 7;
            if (name == "domainIpAddress") return 8;
            if (name == "pbhk") return 9;
            if (name == "remoteId") return 10;
            if (name == "circuitId") return 11;
            if (name == "nasPort") return 12;
            if (name == "domain") return 13;
            if (name == "username") return 14;
            if (name == "acctSessionId") return 15;
            if (name == "dnis") return 16;
            if (name == "media") return 17;
            if (name == "mlpNegotiated") return 18;
            if (name == "protocol") return 19;
            if (name == "serviceName") return 20;
            if (name == "dhcpClass") return 21;
            if (name == "tunnelName") return 22;
            return -1;
        }
};


}
}

#endif /* _CISCO_SUBSCRIBER_IDENTITY_TC_MIB_ */

