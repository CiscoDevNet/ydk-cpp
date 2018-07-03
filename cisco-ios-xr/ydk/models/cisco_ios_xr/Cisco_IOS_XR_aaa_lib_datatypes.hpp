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

};

class AaaAccounting : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf not_set;
        static const ydk::Enum::YLeaf start_stop;
        static const ydk::Enum::YLeaf stop_only;

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

};

class AaaAccountingBroadcast : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};

class AaaAccountingRpFailover : public ydk::Enum
{
    public:
        static const ydk::Enum::YLeaf disable;
        static const ydk::Enum::YLeaf enable;

};


}
}

#endif /* _CISCO_IOS_XR_AAA_LIB_DATATYPES_ */

