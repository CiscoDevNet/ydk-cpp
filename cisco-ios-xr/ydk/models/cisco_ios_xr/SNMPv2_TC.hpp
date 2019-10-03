#ifndef _SNMPV2_TC_
#define _SNMPV2_TC_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace SNMPv2_TC {

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

class StorageType : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf other;
        static const ydk::Enum::YLeaf volatile_;
        static const ydk::Enum::YLeaf nonVolatile;
        static const ydk::Enum::YLeaf permanent;
        static const ydk::Enum::YLeaf readOnly;

        static int get_enum_value(const std::string & name) {
            if (name == "other") return 1;
            if (name == "volatile") return 2;
            if (name == "nonVolatile") return 3;
            if (name == "permanent") return 4;
            if (name == "readOnly") return 5;
            return -1;
        }
};

class RowStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf notInService;
        static const ydk::Enum::YLeaf notReady;
        static const ydk::Enum::YLeaf createAndGo;
        static const ydk::Enum::YLeaf createAndWait;
        static const ydk::Enum::YLeaf destroy;

        static int get_enum_value(const std::string & name) {
            if (name == "active") return 1;
            if (name == "notInService") return 2;
            if (name == "notReady") return 3;
            if (name == "createAndGo") return 4;
            if (name == "createAndWait") return 5;
            if (name == "destroy") return 6;
            return -1;
        }
};


}
}

#endif /* _SNMPV2_TC_ */

