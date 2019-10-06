#ifndef _CISCO_DYNAMIC_TEMPLATE_TC_MIB_
#define _CISCO_DYNAMIC_TEMPLATE_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_DYNAMIC_TEMPLATE_TC_MIB {

class DynamicTemplateTargetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf interface;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "interface") return 2;
            return -1;
        }
};

class DynamicTemplateType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf derived;
        static const ydk::Enum::YLeaf ppp;
        static const ydk::Enum::YLeaf ethernet;
        static const ydk::Enum::YLeaf ipSubscriber;
        static const ydk::Enum::YLeaf service;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "derived") return 2;
            if (name == "ppp") return 3;
            if (name == "ethernet") return 4;
            if (name == "ipSubscriber") return 5;
            if (name == "service") return 6;
            return -1;
        }
};


}
}

#endif /* _CISCO_DYNAMIC_TEMPLATE_TC_MIB_ */

