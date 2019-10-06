#ifndef _CISCO_ATM_EXT_MIB_
#define _CISCO_ATM_EXT_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace CISCO_ATM_EXT_MIB {

class OamCCVcState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf verified;
        static const ydk::Enum::YLeaf aisrdi;
        static const ydk::Enum::YLeaf notManaged;

        static int get_enum_value(const std::string & name) {
            if (name == "verified") return 1;
            if (name == "aisrdi") return 2;
            if (name == "notManaged") return 3;
            return -1;
        }
};

class OamCCStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf ready;
        static const ydk::Enum::YLeaf waitActiveResponse;
        static const ydk::Enum::YLeaf waitActiveConfirm;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf waitDeactiveConfirm;

        static int get_enum_value(const std::string & name) {
            if (name == "ready") return 1;
            if (name == "waitActiveResponse") return 2;
            if (name == "waitActiveConfirm") return 3;
            if (name == "active") return 4;
            if (name == "waitDeactiveConfirm") return 5;
            return -1;
        }
};


}
}

#endif /* _CISCO_ATM_EXT_MIB_ */

