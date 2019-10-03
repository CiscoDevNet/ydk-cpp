#ifndef _CISCO_IOS_XR_AAA_LIB_DATATYPES_
#define _CISCO_IOS_XR_AAA_LIB_DATATYPES_

#include <memory>
#include <vector>
#include <string>
#include <ydk/types.hpp>
#include <ydk/errors.hpp>

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_lib_datatypes {

class AaaAccountingUpdate : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf newinfo;
        static const ydk::Enum::YLeaf periodic;

        static int get_enum_value(const std::string & name) {
            if (name == "none") return 0;
            if (name == "newinfo") return 3;
            if (name == "periodic") return 4;
            return -1;
        }
};

class AaaAccounting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "start-stop") return 1;
            if (name == "stop-only") return 2;
            return -1;
        }
};

class AaaMethod : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf local;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs_plus;
        static const ydk::Enum::YLeaf dsmd;
        static const ydk::Enum::YLeaf sgbp;
        static const ydk::Enum::YLeaf acct_d;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf if_authenticated;
        static const ydk::Enum::YLeaf server_group;
        static const ydk::Enum::YLeaf server_group_not_defined;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf kerberos;
        static const ydk::Enum::YLeaf diameter;
        static const ydk::Enum::YLeaf last;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "none") return 1;
            if (name == "local") return 2;
            if (name == "radius") return 3;
            if (name == "tacacs-plus") return 4;
            if (name == "dsmd") return 5;
            if (name == "sgbp") return 6;
            if (name == "acct-d") return 7;
            if (name == "error") return 8;
            if (name == "if-authenticated") return 9;
            if (name == "server-group") return 10;
            if (name == "server-group-not-defined") return 11;
            if (name == "line") return 12;
            if (name == "enable") return 13;
            if (name == "kerberos") return 14;
            if (name == "diameter") return 15;
            if (name == "last") return 16;
            return -1;
        }
};

class AaaAccountingBroadcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};

class AaaMethodAccounting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf none;
        static const ydk::Enum::YLeaf radius;
        static const ydk::Enum::YLeaf tacacs_plus;
        static const ydk::Enum::YLeaf dsmd;
        static const ydk::Enum::YLeaf sgbp;
        static const ydk::Enum::YLeaf acct_d;
        static const ydk::Enum::YLeaf error;
        static const ydk::Enum::YLeaf if_authenticated;
        static const ydk::Enum::YLeaf server_group;
        static const ydk::Enum::YLeaf server_group_not_defined;
        static const ydk::Enum::YLeaf line;
        static const ydk::Enum::YLeaf enable;
        static const ydk::Enum::YLeaf kerberos;
        static const ydk::Enum::YLeaf diameter;
        static const ydk::Enum::YLeaf last;
        static const ydk::Enum::YLeaf local;

        static int get_enum_value(const std::string & name) {
            if (name == "not-set") return 0;
            if (name == "none") return 1;
            if (name == "radius") return 3;
            if (name == "tacacs-plus") return 4;
            if (name == "dsmd") return 5;
            if (name == "sgbp") return 6;
            if (name == "acct-d") return 7;
            if (name == "error") return 8;
            if (name == "if-authenticated") return 9;
            if (name == "server-group") return 10;
            if (name == "server-group-not-defined") return 11;
            if (name == "line") return 12;
            if (name == "enable") return 13;
            if (name == "kerberos") return 14;
            if (name == "diameter") return 15;
            if (name == "last") return 16;
            if (name == "local") return 17;
            return -1;
        }
};

class AaaAccountingRpFailover : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

        static int get_enum_value(const std::string & name) {
            if (name == "disable") return 0;
            if (name == "enable") return 1;
            return -1;
        }
};


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_DATATYPES_ */

