#ifndef _CISCO_DYNAMIC_TEMPLATE_TC_MIB_
#define _CISCO_DYNAMIC_TEMPLATE_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace ydk {
namespace CISCO_DYNAMIC_TEMPLATE_TC_MIB {

class DynamictemplatetargettypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf interface;

};

class DynamictemplatetypeEnum : public Enum
{
    public:
        static const Enum::YLeaf other;
        static const Enum::YLeaf derived;
        static const Enum::YLeaf ppp;
        static const Enum::YLeaf ethernet;
        static const Enum::YLeaf ipSubscriber;
        static const Enum::YLeaf service;

};


}
}

#endif /* _CISCO_DYNAMIC_TEMPLATE_TC_MIB_ */

