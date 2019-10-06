#ifndef _CISCO_CBP_TARGET_TC_MIB_
#define _CISCO_CBP_TARGET_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_CBP_TARGET_TC_MIB {

class CcbptTargetDirection : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf undirected;
        static const ydk::Enum::YLeaf input;
        static const ydk::Enum::YLeaf output;
        static const ydk::Enum::YLeaf inOut;

        static int get_enum_value(const std::string & name) {
            if (name == "undirected") return 1;
            if (name == "input") return 2;
            if (name == "output") return 3;
            if (name == "inOut") return 4;
            return -1;
        }
};

class CcbptPolicySourceType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ciscoCbQos;
        static const ydk::Enum::YLeaf ciscoCbpBase;

        static int get_enum_value(const std::string & name) {
            if (name == "ciscoCbQos") return 1;
            if (name == "ciscoCbpBase") return 2;
            return -1;
        }
};

class CcbptTargetType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf genIf;
        static const ydk::Enum::YLeaf atmPvc;
        static const ydk::Enum::YLeaf frDlci;
        static const ydk::Enum::YLeaf entity_;
        static const ydk::Enum::YLeaf fwZone;
        static const ydk::Enum::YLeaf fwZonePair;
        static const ydk::Enum::YLeaf aaaSession;

        static int get_enum_value(const std::string & name) {
            if (name == "genIf") return 1;
            if (name == "atmPvc") return 2;
            if (name == "frDlci") return 3;
            if (name == "entity") return 4;
            if (name == "fwZone") return 5;
            if (name == "fwZonePair") return 6;
            if (name == "aaaSession") return 7;
            return -1;
        }
};


}
}

#endif /* _CISCO_CBP_TARGET_TC_MIB_ */

