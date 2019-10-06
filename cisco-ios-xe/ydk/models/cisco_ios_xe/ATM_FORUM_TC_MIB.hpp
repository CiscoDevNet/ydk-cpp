#ifndef _ATM_FORUM_TC_MIB_
#define _ATM_FORUM_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ATM_FORUM_TC_MIB {

class TruthValue : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf true_;
        static const ydk::Enum::YLeaf false_;

        static int get_enum_value(const std::string & name) {
            if (name == "true") return 1;
            if (name == "false") return 2;
            return -1;
        }
};

class AtmServiceCategory : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf cbr;
        static const ydk::Enum::YLeaf rtVbr;
        static const ydk::Enum::YLeaf nrtVbr;
        static const ydk::Enum::YLeaf abr;
        static const ydk::Enum::YLeaf ubr;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "cbr") return 2;
            if (name == "rtVbr") return 3;
            if (name == "nrtVbr") return 4;
            if (name == "abr") return 5;
            if (name == "ubr") return 6;
            return -1;
        }
};


}
}

#endif /* _ATM_FORUM_TC_MIB_ */

