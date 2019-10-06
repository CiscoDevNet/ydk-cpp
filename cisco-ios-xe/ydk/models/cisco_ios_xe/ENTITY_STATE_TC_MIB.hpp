#ifndef _ENTITY_STATE_TC_MIB_
#define _ENTITY_STATE_TC_MIB_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xe {
namespace ENTITY_STATE_TC_MIB {

class EntityStandbyStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf hotStandby;
        static const ydk::Enum::YLeaf coldStandby;
        static const ydk::Enum::YLeaf providingService;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "hotStandby") return 2;
            if (name == "coldStandby") return 3;
            if (name == "providingService") return 4;
            return -1;
        }
};

class EntityOperState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf disabled;
        static const ydk::Enum::YLeaf enabled;
        static const ydk::Enum::YLeaf testing;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "disabled") return 2;
            if (name == "enabled") return 3;
            if (name == "testing") return 4;
            return -1;
        }
};

class EntityAdminState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf locked;
        static const ydk::Enum::YLeaf shuttingDown;
        static const ydk::Enum::YLeaf unlocked;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "locked") return 2;
            if (name == "shuttingDown") return 3;
            if (name == "unlocked") return 4;
            return -1;
        }
};

class EntityUsageState : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf unknown;
        static const ydk::Enum::YLeaf idle;
        static const ydk::Enum::YLeaf active;
        static const ydk::Enum::YLeaf busy;

        static int get_enum_value(const std::string & name) {
            if (name == "unknown") return 1;
            if (name == "idle") return 2;
            if (name == "active") return 3;
            if (name == "busy") return 4;
            return -1;
        }
};


}
}

#endif /* _ENTITY_STATE_TC_MIB_ */

