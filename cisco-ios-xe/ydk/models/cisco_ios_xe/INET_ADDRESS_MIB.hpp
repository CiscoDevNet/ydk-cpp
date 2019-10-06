#ifndef _INET_ADDRESS_MIB_
#define _INET_ADDRESS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace INET_ADDRESS_MIB {

class InetAddressType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;
        static const ydk::Enum::YLeaf ipv4z;
        static const ydk::Enum::YLeaf ipv6z;
        static const ydk::Enum::YLeaf dns;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            if (name == "ipv4z") return 3;
            if (name == "ipv6z") return 4;
            if (name == "dns") return 16;
            return -1;
        }
};

class InetScopeType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf interfaceLocal;
        static const ydk::Enum::YLeaf linkLocal;
        static const ydk::Enum::YLeaf subnetLocal;
        static const ydk::Enum::YLeaf adminLocal;
        static const ydk::Enum::YLeaf siteLocal;
        static const ydk::Enum::YLeaf organizationLocal;
        static const ydk::Enum::YLeaf global;

        static int get_enum_value(const std::string & name) {
            if (name == "interfaceLocal") return 1;
            if (name == "linkLocal") return 2;
            if (name == "subnetLocal") return 3;
            if (name == "adminLocal") return 4;
            if (name == "siteLocal") return 5;
            if (name == "organizationLocal") return 8;
            if (name == "global") return 14;
            return -1;
        }
};

class InetVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 0;
            if (name == "ipv4") return 1;
            if (name == "ipv6") return 2;
            return -1;
        }
};


}
}

#endif /* _INET_ADDRESS_MIB_ */

