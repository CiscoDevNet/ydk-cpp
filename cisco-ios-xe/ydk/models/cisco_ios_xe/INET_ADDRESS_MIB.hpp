#ifndef _INET_ADDRESS_MIB_
#define _INET_ADDRESS_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace INET_ADDRESS_MIB {

class InetaddresstypeEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;
        static const Enum::YLeaf ipv4z;
        static const Enum::YLeaf ipv6z;
        static const Enum::YLeaf dns;

};

class InetscopetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf interfaceLocal;
        static const Enum::YLeaf linkLocal;
        static const Enum::YLeaf subnetLocal;
        static const Enum::YLeaf adminLocal;
        static const Enum::YLeaf siteLocal;
        static const Enum::YLeaf organizationLocal;
        static const Enum::YLeaf global;

};

class InetversionEnum : public Enum
{
    public:
        static const Enum::YLeaf unknown;
        static const Enum::YLeaf ipv4;
        static const Enum::YLeaf ipv6;

};


}
}

#endif /* _INET_ADDRESS_MIB_ */

