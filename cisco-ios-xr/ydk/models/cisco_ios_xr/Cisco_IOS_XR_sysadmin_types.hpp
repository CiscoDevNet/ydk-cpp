#ifndef _CISCO_IOS_XR_SYSADMIN_TYPES_
#define _CISCO_IOS_XR_SYSADMIN_TYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_sysadmin_types {

class GenericOperStatus : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class GenericHaRole : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf no_ha_role;
        static const ydk::Enum::YLeaf Active;
        static const ydk::Enum::YLeaf Standby;

        static int get_enum_value(const std::string & name) {
            if (name == "no-ha-role") return 0;
            if (name == "Active") return 1;
            if (name == "Standby") return 2;
            return -1;
        }
};

class Adminstate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            return -1;
        }
};

class RackId : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf L0;
        static const ydk::Enum::YLeaf L1;
        static const ydk::Enum::YLeaf L2;
        static const ydk::Enum::YLeaf L3;
        static const ydk::Enum::YLeaf L4;
        static const ydk::Enum::YLeaf L5;
        static const ydk::Enum::YLeaf L6;
        static const ydk::Enum::YLeaf L7;
        static const ydk::Enum::YLeaf L8;
        static const ydk::Enum::YLeaf L9;
        static const ydk::Enum::YLeaf L10;
        static const ydk::Enum::YLeaf L11;
        static const ydk::Enum::YLeaf L12;
        static const ydk::Enum::YLeaf L13;
        static const ydk::Enum::YLeaf L14;
        static const ydk::Enum::YLeaf L15;
        static const ydk::Enum::YLeaf F0;
        static const ydk::Enum::YLeaf F1;
        static const ydk::Enum::YLeaf F2;
        static const ydk::Enum::YLeaf F3;
        static const ydk::Enum::YLeaf B0;
        static const ydk::Enum::YLeaf B1;

        static int get_enum_value(const std::string & name) {
            if (name == "L0") return 0;
            if (name == "L1") return 1;
            if (name == "L2") return 2;
            if (name == "L3") return 3;
            if (name == "L4") return 4;
            if (name == "L5") return 5;
            if (name == "L6") return 6;
            if (name == "L7") return 7;
            if (name == "L8") return 8;
            if (name == "L9") return 9;
            if (name == "L10") return 10;
            if (name == "L11") return 11;
            if (name == "L12") return 12;
            if (name == "L13") return 13;
            if (name == "L14") return 14;
            if (name == "L15") return 15;
            if (name == "F0") return 16;
            if (name == "F1") return 17;
            if (name == "F2") return 18;
            if (name == "F3") return 19;
            if (name == "B0") return 20;
            if (name == "B1") return 21;
            return -1;
        }
};

class FabricLinkTypes : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf S1;
        static const ydk::Enum::YLeaf S2;
        static const ydk::Enum::YLeaf S3;

        static int get_enum_value(const std::string & name) {
            if (name == "S1") return 0;
            if (name == "S2") return 1;
            if (name == "S3") return 2;
            return -1;
        }
};

class GenericOperStatus_ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};

class GenericOperStatus__ : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf up;
        static const ydk::Enum::YLeaf down;

        static int get_enum_value(const std::string & name) {
            if (name == "up") return 0;
            if (name == "down") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_SYSADMIN_TYPES_ */

