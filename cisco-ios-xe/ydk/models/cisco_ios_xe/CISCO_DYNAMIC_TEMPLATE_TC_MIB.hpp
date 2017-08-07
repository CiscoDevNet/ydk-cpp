#ifndef _CISCO_DYNAMIC_TEMPLATE_TC_MIB_
#define _CISCO_DYNAMIC_TEMPLATE_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_DYNAMIC_TEMPLATE_TC_MIB {

class Dynamictemplatetype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf derived;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipSubscriber;
        static const ydk::Enum::YLeaf service;

};

class Dynamictemplatetargettype : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf interface;

};


}
}

#endif /* _CISCO_DYNAMIC_TEMPLATE_TC_MIB_ */

