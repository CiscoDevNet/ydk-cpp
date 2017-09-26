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

};

class InetVersion : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf ipv4;
        static const ydk::Enum::YLeaf ipv6;

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

};


}
}

#endif /* _INET_ADDRESS_MIB_ */

