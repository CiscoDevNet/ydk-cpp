#ifndef _CISCO_OSPF_
#define _CISCO_OSPF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace cisco_ospf {

class OspfLogAdjEnum : public Enum
{
    public:
        static const Enum::YLeaf enable;
        static const Enum::YLeaf detail;
        static const Enum::YLeaf disable;

};

class PrefixApplicabilityEnum : public Enum
{
    public:
        static const Enum::YLeaf protected_;
        static const Enum::YLeaf all;

};

class AccessListInOutTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf in;
        static const Enum::YLeaf out;

};

class OspfExternalTypeEnum : public Enum
{
    public:
        static const Enum::YLeaf Y_1;
        static const Enum::YLeaf Y_2;

};


}
}

#endif /* _CISCO_OSPF_ */

