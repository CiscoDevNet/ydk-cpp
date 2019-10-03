#ifndef _CISCO_OSPF_
#define _CISCO_OSPF_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace cisco_ospf {

class OspfLogAdj : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf detail;
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "enable") return 0;
            if (name == "detail") return 1;
            if (name == "disable") return 2;
            return -1;
        }
};

class PrefixApplicability : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf protected_;
        static const ydk::Enum::YLeaf all;

        static int get_enum_value(const std::string & name) {
            if (name == "protected") return 1;
            if (name == "all") return 2;
            return -1;
        }
};

class AccessListInOutType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf in;
        static const ydk::Enum::YLeaf out;

        static int get_enum_value(const std::string & name) {
            if (name == "in") return 0;
            if (name == "out") return 1;
            return -1;
        }
};

class OspfExternalType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf Y_1;
        static const ydk::Enum::YLeaf Y_2;

        static int get_enum_value(const std::string & name) {
            if (name == "1") return 0;
            if (name == "2") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_OSPF_ */

