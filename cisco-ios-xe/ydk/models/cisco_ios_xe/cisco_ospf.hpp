#ifndef _CISCO_OSPF_
#define _CISCO_OSPF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_ospf {

class AccessListInOutType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

};

class OspfExternalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

};

class PrefixApplicability : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf all;

};

class OspfLogAdj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf detail;
        static const ydk::Enum::YLeaf disable;

};


}
}

#endif /* _CISCO_OSPF_ */

